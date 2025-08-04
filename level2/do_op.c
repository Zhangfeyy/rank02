#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void do_op(char *n1, char *op, char *n2)
{
	int temp1;
	int temp2;
	int result;

	
	temp1 = atoi(n1);
	temp2 = atoi(n2);
	result = 0;

	if(*op == '+')
		result = temp1 + temp2;
	else if(*op == '-')
		result = temp1 - temp2;
	else if(*op == '/')
		result = temp1 / temp2;
	else if(*op == '*')
		result = temp1 * temp2;
	else if(*op == '%')
		result = temp1 % temp2;
	printf("%d", result);
}

int main(int argc, char **argv)
{
	if(argc == 4)
	{
		do_op(argv[1], argv[2], argv[3]);
	}
	write(1, "\n", 1);
}