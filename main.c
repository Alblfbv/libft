/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:44:56 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/06 18:54:21 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void	ft_test_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

char	ft_char_ch(char c)
{
	c = c + 1;
}

int	main(void)
{

	char	*str1;
	char	*str2;
	char	*str3;
	char	*str_return_c;
	char	*str_return_ft;
	int		return_c;
	int		return_ft;

	str1 = strdup("ABCDEFGHIJ");
	str2 = strdup("abcdefghij");
	str3 = strdup("0123456789");
	printf("\n\nTest de la libft\n");

//tests memset
	printf("\n	--- memset ---\n\n");
	printf("Initial string\n%s\n%s\n\n", str1, str2);
	memset(str1 + 2, 61, 5);
	ft_memset(str2 + 2, 61, 5);
	printf("Result memset : %s\nResult ft_memset : %s", str1, str2);

//tests bzero
	printf("\n\n	--- bzero ---\n\n");
	bzero(str1 + 4, 0);
	ft_bzero(str2 + 4, 0);
	printf("Result bzero 0 : %s\nResult ft_bzero 0 : %s", str1, str2);
	bzero(str1 + 4, 5);
	ft_bzero(str2 + 4, 5);
	printf("\nResult bzero +4 : %s\nResult ft_bzero +4 : %s", str1, str2);

//tests memcpy
	str1 = strdup("ABCDEFGHIJ");
	str2 = strdup("abcdefghij");

	printf("\n\n	--- memcpy ---\n\n");
	memcpy(str1, str3, 4);
	ft_memcpy(str2, str3, 4);
	printf("Result memcpy : %s\nResult ft_memcpy : %s", str1, str2);

//tests memccpy
	str1 = strdup("ABCDEFGHIJ");
	str2 = strdup("abcdefghij");

	printf("\n\n	--- memccpy ---\n\n");
	str_return_c = memccpy(str1, str3, 48 + 5, 15);
	str_return_ft = ft_memccpy(str2, str3, 48 + 5, 15);
	printf("Result memccpy : %s\nResult ft_memccpy : %s\nString returned memccpy : %s\nString returned ft_memccpy : %s", str1, str2, str_return_c, str_return_ft);


//tests memmove
	str1 = strdup("ABCDEFGHIJ");
	str2 = strdup("abcdefghij");

	printf("\n\n	--- memmove ---\n\n");
	memmove(str1 + 2, str1, 6);
	ft_memmove(str2 + 2, str2, 6);
	printf("Result memmove : %s\nResult ft_memmove : %s", str1, str2);

	str1 = strdup("ABCDEFGHIJ");
	str2 = strdup("abcdefghij");
	memmove(str1 - 2, str1, 6);
	ft_memmove(str2 - 2, str2, 6);
	printf("\nResult memmove : %s\nResult ft_memmove : %s", str1, str2);

	str1 = strdup("ABCDEFGHIJ");
	str2 = strdup("abcdefghij");
	memmove(str1, str1 + 2, 8);
	ft_memmove(str2, str2 + 2, 8);
	printf("\nResult memmove : %s\nResult ft_memmove : %s", str1, str2);

//tests memchr
	printf("\n\n	--- memchr ---\n\n");
	str_return_c = memchr(str3, 48 + 5, 6);
	str_return_ft = ft_memchr(str3, 48 + 5, 6);
	printf("String returned memchr : %s\nString returned ft_memchr : %s", str_return_c, str_return_ft);
	str_return_c = memchr(str3, 48 + 7, 5);
	str_return_ft = ft_memchr(str3, 48 + 7, 5);
	printf("\nString returned memchr : %s\nString returned ft_memchr : %s", str_return_c, str_return_ft);

//tests memcmp
	printf("\n\n	--- memcmp ---\n\n");
	return_c = memcmp(str1, str1, 6);
	return_ft = ft_memcmp(str1, str1, 6);
	printf("Return memcmp : %d\nReturn ft_memcmp : %d", return_c, return_ft);
	return_c = memcmp(str1, str2, 6);
	return_ft = ft_memcmp(str1, str2, 6);
	printf("\nReturn memcmp : %d\nReturn ft_memcmp : %d", return_c, return_ft);
	return_c = memcmp(strdup(""), strdup(""), 6);
	return_ft = ft_memcmp(strdup(""), strdup(""), 6);
	printf("\nReturn memcmp : %d\nReturn ft_memcmp : %d", return_c, return_ft);
	

//tests strlen
	printf("\n\n	--- strlen ---\n\n");
	printf("Result strlen : %lu\nResult ft_strlen : %d", strlen(str3), ft_strlen(str3));

//tests strdup


//tests strcpy


//tests strncpy


//tests strcat


//tests strncat


//tests strlcat


//tests strchr


//tests strrchr


//tests strstr


//tests strnstr


//tests strcmp


//tests strncmp


//tests atoi


//tests isalpha


//tests isdigit


//tests isalnum


//tests isascii


//tests isprint


//tests toupper
	printf("\n\n	--- toupper ---\n\n");
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", toupper('a'));
	printf("%c\n", ft_toupper('-'));
	printf("%c\n", toupper('-'));

//tests tolower
	printf("\n\n	--- tolower ---\n\n");
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", tolower('A'));
	printf("%c\n", ft_tolower('-'));
	printf("%c\n", tolower('-'));

//tests strnew
	printf("\n\n	--- strnew ---\n\n");
	str1 = ft_strnew(strlen(str1));
	printf("Result ft_strnew%s", str1);
	memset(str1, 68, 10);
	printf("\nResult ft_strnew after memset : %s", str1);
	
//tests strdel
	printf("\n\n	--- strdel ---\n\n");
//	ft_strdel(&str1);	
//	printf("Result ft_strdel : %s", str1);

//tests ft_strclr
	printf("\n\n	--- strclr ---\n\n");
	ft_strclr(str1);
	printf("Result ft_strclr%s", str1);
	memset(str1, 68, 10);
	printf("\nResult ft_strclr after memset : %s", str1);

//tests ft_striter
	printf("\n\n	--- striter ---\n\n");
	ft_striter(str1, &ft_test_str);
	memset(str1, 68, 10);
	printf("\nResult ft_striter after memset : %s", str1);

//tests ft_striteri


//tests ft_strmap
	printf("\n\n	--- strmap ---\n\n");
	str1 = strdup("ABCDEFGHIJ");
	printf("Initial string : %s", str1);
	str1 = ft_strmap(str1, &ft_char_ch);
	printf("\nResult ft_strmap : %s", str1);

//tests ft_strmapi
}
