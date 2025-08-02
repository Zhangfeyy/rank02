#include <unistd.h>

void reverse(char *str)
{
	int	len;
	len = 0;
	while(str[len])
	{
		len++;
	}
	while(len > 0)
	{
		write(1, &str[len - 1], 1);
		len--;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		reverse(argv[1]);
	write(1, "\n", 1);
}