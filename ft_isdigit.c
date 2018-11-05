int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main(void)
{
	char c;
	
	c = 'a';
	printf("%d", ft_isdigit(c));
	return (0);
}
