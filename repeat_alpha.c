#include <unistd.h>


void	repeat(char c, int i)
{
	int	len;
	int	count;
	if(i == 1)
		len = c - 'a';
	if (i == 2)
		len = c - 'A';
	count = 0;
	while(count <= len )
	{
		write(1, &c, 1);
		count++;
	}
}

void repeat_alpha(char *string)
{
	int	i;
	i = 0;
	while(string[i])
	{
		if(string[i] >= 'a' && string[i] <= 'z')
			repeat(string[i], 1);
		else if(string[i] >= 'A' && string[i] <= 'Z')
			repeat(string[i], 2);
		else
			write(1, &string[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
}