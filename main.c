/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:44:56 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/05 19:00:03 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);

int	main(void)
{
	char	str1[10] = "ABCDEFGHI";
	char	str2[10] = "ABCDEFGHI";
	printf("%s\n%s\n\n", str1, str2);
	memset(str1 + 2, 49, 5);
	ft_memset(str2 + 2, 50, 5);
	printf("%s\n%s\n\n", str1, str2);
	bzero(str1 + 4, 0);
	ft_bzero(str2 + 4, 0);
	printf("%s\n%s\n\n", str1, str2);
	ft_memcpy(str2, str1, 4);
	printf("%s\n%s", str1, str2);
}
