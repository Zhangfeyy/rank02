#include "flood_fill.h"
#include <unistd.h>
#include <stdio.h>

void  flood_fill(char **tab, t_point size, t_point begin)
{
	size_t row = 0;
	size_t col = 0;
	char temp = tab[begin.y][begin.x];

	if(begin.y < 0 || begin.y >= size.y || begin.x < 0 || begin.x >= size.x)
		return ;

	while(row < size.y)
	{
		col = 0;
		while(col < size.x)
		{
			if(tab[row][col] == temp)
				tab[row][col] = 'F';
			col++;
		}
		row++;
	}
}