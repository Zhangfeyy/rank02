#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len])
		len++;
	return(len);
}

int	count_words(char *str)
{
	int count = 0;
	int i = 0;
	int in_word = 0;

	while(str[i])
	{
		if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			if(!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
		i++;
	}
	return(count);
}

int	word_len(char *str, int start)
{
	int len = 0;
	
	while(str[start + len] && str[start + len] != ' ' && 
		  str[start + len] != '\t' && str[start + len] != '\n')
		len++;
	return(len);
}

char **ft_split(char *str)
{
	char	**split;
	int	i;
	int	j;
	int	k;
	int	word_count;

	if(!str)
		return(NULL);
	
	word_count = count_words(str);
	split = (char **)malloc(sizeof(char *) * (word_count + 1));
	if(!split)
		return(NULL);
	
	i = 0;
	j = 0;
	while(str[i] && j < word_count)
	{
		// Skip whitespace
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		
		if(str[i])
		{
			// Allocate maximum possible space for the word (length of entire string)
			split[j] = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
			if(!split[j])
				return(NULL);
			
			// Copy the word
			k = 0;
			while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			{
				split[j][k] = str[i];
				i++;
				k++;
			}
			split[j][k] = '\0';
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}

int main()
{
	char **result = ft_split("this is a simple test");
	int i = 0;
	
	if(result)
	{
		while(result[i])
		{
			printf("Word %d: %s\n", i, result[i]);
			i++;
		}
		
		// Free allocated memory
		i = 0;
		while(result[i])
		{
			free(result[i]);
			i++;
		}
		free(result);
	}
	return 0;
}