#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(const char *zouloutage)
{
	int	i;

	i = 0;
	while(zouloutage[i] != '\0')
	{
		i++;
	}
	return(i);
}
