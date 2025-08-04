int ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	if(str[i] && str[i] == '-')
	{
		i++;
		sign = -1;
	}
	while((str[i]) && (str[i] < '0' || str[i] > '9'))
		i++;	
	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_atoi(argv[1]));
}