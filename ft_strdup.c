#include <string.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *str)
{
	char	*strcpy;
	int		i;
	
	strcpy = (char*)malloc(sizeof(ft_strlen(str) + 1));
	if (!strcpy)
		return (NULL);
	i = 0;
	while(i < ft_strlen(str))
	{
		strcpy[i] = str[i];
		i++;
	}
	strcpy[i] = '\0';
	return(strcpy);
}

int		main(void)
{
	char	*str;
	char	*strcpy;
	int		i;

	str = (char *)malloc(sizeof(char) * (10 + 1));
	i = 0;

	while(i < 10)
	{
		str[i] = i + 48;
		i++;
	}
	strcpy = ft_strdup(str);
	printf("%s", strcpy);
	return(0);
}
