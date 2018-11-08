
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

char	*ft_strnew(size_t len)
{
	char	*str;

	if(!(str = (char*)malloc(sizeof(str) * (len + 1))))
		return (NULL);
	ft_bzero(str, len + 1);
	return (str);
}
