#include <string.h>
#include <stdlib.h>

char	*ft_strchr(const char *src, int c)
{
	int		i;

	i = 0;
	while(src[i] != c && src[i] != '\0')
		i++;
	if(src[i] == c)
		return((char*)src + i);
	else
		return(NULL);
}
