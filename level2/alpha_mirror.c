#include<unistd.h>
void mirror_case(char c, int specifer)
{
	char temp;

	if(specifer == 1)
	{
		temp = 'm' - c + 'n';
		write(1, &temp, 1);
	}
	else if(specifer == 2)
	{
		temp = 'M' - c + 'N';
		write(1, &temp, 1);
	}
}

void mirror(char *string)
{
	size_t i;

	i = 0;
	while(string[i])
	{
		if(string[i] >= 'a' && string[i] <= 'z')
			mirror_case(string[i], 1);
		else if(string[i] >= 'A' && string[i] <= 'Z')
			mirror_case(string[i], 2);
		else
			write(1, &string[i], 1);	
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	mirror(argv[1]);
	write(1, "\n", 1);
}