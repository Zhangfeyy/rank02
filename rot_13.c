#include <unistd.h>
void rot_case(char d, int i)
{
	int e = d + 13; // to deal with overflow

	if(i == 1)
	{
		if(e <= 'z')
			write(1, &e, 1);
		else
		{
			e = e - 'z' + 'a' -1;
			write(1, &e, 1);
		}
	}
	if(i == 2)
	{
		if(e <= 'Z')
			write(1, &e, 1);
		else
		{
			e = e - 'Z' + 'A' - 1;
			write(1, &e, 1);
		}
	}
}

void rot_13(char *str)
{
	int	i;
	i = 0;

	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			rot_case(str[i], 1);
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			rot_case(str[i], 2);
		}
		else 
			write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc ==2)
		rot_13(argv[1]);
	write(1, "\n", 1);
}