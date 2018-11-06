#ifndef LIBFT_H
#	define LIBFT_H

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
int		ft_strlen(const char *str);

#endif
