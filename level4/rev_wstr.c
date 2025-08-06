#include <stdlib.h>
#include <unistd.h>

size_t word_count(char *str)
{
	size_t i = 0;
	size_t count = 0;
	while(str[i])
	{
		if(str[i] && str[i] != ' ' && str[i] != '	')
		{
			while(str[i] && str[i] != ' ' && str[i] != '	')
				i++;
			count++;
		}
		i++;
	}
	return (count);
}

size_t fill_word(char *str, size_t *i, char **strs, size_t j;)
{
	size_t count = 0;
	size_t k = 0;

	while(str[*i + count] && str[*i + count] != ' ' && str[*i + count] != '	')
		count++;
	strs[j] = (char *)malloc(count + 1);
	if(!strs[j])
		return(all_free());
	while(str[*i] && str[*i] != ' ' && str[*i] != '	')
	{
		strs[j][k] = 
	}
}

void all_free()
{

}

void rev_read(strs)
{

}


void rev_wstr(char *str)
{
	size_t	i = 0;
	size_t 	j = 0;
	size_t	k = 0;
	char **strs;

	strs = (char **)malloc(sizeof(char*) * (word_count(str) + 1));
	if(strs)
		return (NULL);
	while(str[i])
	{
		if(str[i] && str[i] != ' ' && str[i] != '	')
			if(!fill_word())
				return (NULL);
		i++;
	}

	rev_read(strs);
}