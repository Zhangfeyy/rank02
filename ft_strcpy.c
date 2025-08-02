char	*ft_strcpy(char *s1, char *s2)
{
	int	i;
	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;
	char s1[15];
	char *s3 = ft_strcpy(s1, argv[1]);
	printf("%s", s3);
}