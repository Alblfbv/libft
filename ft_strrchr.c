#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*dest;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == c)
			dest = str + i;
		i++;
	}
	if(*dest = c)
		return(dest);
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
	src[i] = 'B';
	while(i < 10)
	{
		src[i/*+ 1*/] = 64 + i;
		i++;
	}
	src[i] = 'B';
	printf("%s\n", src);
	src = ft_strrchr(src, c);
	printf("%s\n", src);
}
