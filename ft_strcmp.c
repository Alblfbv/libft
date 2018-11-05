#include <stdio.h>
#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return(s1[i] - s2[i]);
}

int	main(void)
{
	char s1[10] = "BELLA";
	char s2[10] = "BELLE";
	printf("%d\n", strcmp(s1, s2));
	printf("%d", ft_strcmp(s1, s2));
}
