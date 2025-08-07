# include <unistd.h>

void epur_str(char *string)
{
	size_t i = 0;
	size_t j;
	while(string[i] && (string[i] == ' ' || string[i] == '\t'))
		i++;
	while(string[i])
	{
		while(string[i] && (string[i] == ' ' || string[i] == '\t'))
			i++;
		if(string[i] && string[i] != ' ' && string[i] != '\t')
		{
			while(string[i] && string[i] != ' ' && string[i] != '\t')
			{
				write(1, &string[i], 1);
				i++;
			}
			j = i;
			while(string[j] && (string[j] == ' ' || string[j] == '\t'))
				j++;
			if(string[j])
				write(1, " ", 1);	
		}
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
}
