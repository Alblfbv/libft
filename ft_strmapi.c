
#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;

	i = 0;
	s2 = (char*)malloc(sizeof(s2) * (ft_strlen(s) + 1));
	while (s[i] != '\0')
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	return (s2);
}
