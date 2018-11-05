#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n)
		i++;
	return(s1[i - 1] - s2[i - 1]);
}

int	main(void)
{
	int		max;
	char	s1[10] = "EEEEEZ";
	char	s2[10] = "EEEEEB";

	max = 5;
	printf("%d\n", strncmp(s1, s2, max));
	printf("%d", ft_strncmp(s1, s2, max));
}
