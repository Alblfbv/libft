#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strchr(const char *src, int c)
{
	int		i;

	i = 0;
	while(src[i] != c && src[i] != '\0')
		i++;
	if(src[i] == c)
		return(src + i);
	else
		return(NULL);
}

int		main(void)
{
	int		c;
	int		i;
	char	*src;

	c = 66;
	i = 0;
	src = (char*)malloc(10);
	while(i < 10)
	{
		src[i] = 64 + i;
		i++;
	}
	printf("%s\n", src);
	src = ft_strchr(src, c);
	printf("%s\n", src);
}
