#include <string.h>
#include <stdlib.h>

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*dest;

	i = 0;
	while(str[i] != '\0' && str[i] != c)
		i++;
	if(str[i] == c)
		return((char*)str + i);
	else
		return(NULL);
}
