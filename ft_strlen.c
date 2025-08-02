int	ft_strlen(char *str)
{
	int len;
	
	// Check for NULL pointer first!
	if (!str)
		return (0);  // or return (-1) to indicate error
	len = 0;
	while(str[len])
		len++;
	return(len);
}