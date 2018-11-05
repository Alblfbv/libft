int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	main(void)
{
	char c;
	
	c = '1';
	printf("%d", ft_isalpha(c));
	return (0);
}
