#include <unistd.h>

int ft_atoi(char *string)
{
	int k = 0;
	while(string[k])
	{
		if(string[k] == '-' || string[k] < '0' || string[k] > '9' )
			return(0);
		k++;
	}
	size_t i;
	int num = 0;
	i = 0;
	while(string[i])
	{
		num = string[i]-'0' + num * 10;
		i++;
	}
	return (num);
}

int ft_prime(int n)
{
	int i = 2;

	if(n == 0 || n == 1)
		return (0);
	while(i < n)
	{
		if(n % i == 0)
			return(0);
		i++;
	}
	return (1);
}

int add_prime(char *string)
{
	int num = ft_atoi(string);
	int i = 0;
	int sum = 0;

	while(i <= num)
	{
		if(ft_prime(i))
			sum = sum + i;
		i++;
	}

	return (sum);
}

void output(int n)
{
	char c;

	if(n / 10 != 0)
		output(n/10);
	c = '0' + (n % 10);
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	if(argc == 2)
		output(add_prime(argv[1]));
	write(1, "\n", 1);
}