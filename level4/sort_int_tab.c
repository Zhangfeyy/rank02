#include <stdlib.h>
void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	int temp;

	i = 0;
	while(i < size)
	{
		temp = tab[i];
		j = i;
		while(j < size)
		{
			if(tab[i] > tab[j])
			{
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>
int main()
{
	int tab[8] = {1,3,5,6,78,7,7,9};
	sort_int_tab(tab, 8);
	for(unsigned int i = 0; i < 8; i++)
	{
		printf("%d,", tab[i]);
	}

}