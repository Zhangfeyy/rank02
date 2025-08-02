#include <unistd.h>

void write_number(int n)
{
	char	c;

	if(n / 10 != 0)
		write_number(n/10);
	c = '0' + (n % 10);
	write(1, &c, 1);	
}


void fizz_buzz()
{
	int	i;
	i = 1;

	while(i < 101)
	{
		if(i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else if(i % 3 == 0)
			write(1, "fizz", 4);
		else
			write_number(i);
		i++;
		write(1, "\n", 1);
	}
}

int main()
{
	fizz_buzz();
}