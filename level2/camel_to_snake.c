#include<unistd.h>

void convert(char *string)
{
	size_t i;

	i = 0;
	if(string[i] && string[i] >= 'A' && string[i] <= 'Z')
		string[i] = string[i] - 'A' + 'a';
	while(string[i])
	{
		write(1, &string[i], 1);
		if(string[i + 1] && string[i + 1] >= 'A' && string[i + 1] <= 'Z')
		{
			string[i + 1] = string[i + 1] - 'A' + 'a';
			write(1, "_", 1);
		}	
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		convert(argv[1]);
	}
}