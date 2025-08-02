#include <unistd.h>

void	first_word(char *string)
{
	int	i;

	i = 0;
	while(string[i] == ' ' || string[i] == '	')
		i++;
	while(string[i] && string[i] != ' ' && string[i] != '	')
	{
		write(1, &string[i], 1);
		i++;
	}
	write(1, "\n",1);
}

int	main(int argc, char **argv)
{
	if(argc == 2)
		first_word(argv[1]);
}