#include <stdlib.h>
#include <stdio.h>


int ft_multile(int n)
{
	int i = 0;
	int result = 1;

	while(i < n)
	{
		result *= 10;
		i++;
	}
	return(result);
}

int get_len(int n)
{
	int len = 1;
	if(n < 0)
	{
		len++;
		n = -n;
	}
	while(n / 10 != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}



char *ft_itoa(int nbr)
{
	int len = get_len(nbr);

	if(nbr == -2147483648)
		return("-2147483648");
	char *str = (char *)malloc(len + 1);
	if(!str)
		return(NULL);

	int count = 0;
	if(nbr < 0)
	{
		str[0] = '-';
		count++;
		nbr = -nbr;
	}
	while(count < len)
	{
		str[count] = '0' + (nbr / ft_multile(len - count -1));	
		nbr = nbr % ft_multile(len - count -1);
		count++;
	}
	str[count] = '\0';
	return(str);
}


int main()
{
	printf("%s", ft_itoa(-2147483648));
}