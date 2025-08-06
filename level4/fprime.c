#include <stdio.h>
#include <stdlib.h>

void fprime(char *str)
{
	int num = atoi(str);

	if(num == 1 || num == 2)
		{
			printf("%d", num);
			return ;
		}
		
	int i = 2;
	while(i <= num) //= dont forget it!
	{
		if(num % i == 0)
		{
			printf("%d", i);
			num = num / i;
			i = 2;
			if(num != 1)
				printf("*");
		}
		else
		{
			i++;
		}
	}
}


int main(int ac, char **av)
{
    
    if(ac == 2)
	    fprime(av[1]);
    printf("\n");
    return 0;
}


