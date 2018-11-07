#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, int n)
{
	int		i;
	int		j;

	i = 0;
	while(haystack[i] != '\0' && i < n)
	{
		j = 0;
		while(haystack[i] == needle[j] && needle[j] != '\0' && haystack[i] != '\0' && i < n)
		{
			i++;
			j++;
		}
		if(needle[j] == '\0')
			return((char*)haystack + i - j);
		i++;
	}
	return(NULL);
}
