#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	while(haystack[i] != '\0')
	{
		j = 0;
		while(haystack[i] == needle[j] && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if(needle[j] == '\0')
			return(haystack + i - j);
		i++;
	}
	return(NULL);
}

int		main(void)
{
	char	str[21] = "ABE0123456789ABCD012";
	char	needle[5] = "ABCD";
	printf("%s", ft_strstr(str, needle));
}
