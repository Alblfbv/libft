int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

int	main(void)
{
	char c;
	
	c = 32;
	printf("%d\n", ft_isprint(c));
	printf("%d", isprint(c));
	return (0);
}
