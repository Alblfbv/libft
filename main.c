/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:44:56 by allefebv          #+#    #+#             */
/*   Updated: 2018/11/06 13:36:37 by allefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{

	char	*str;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;
	char	*str_memccpy;
	char	*str_ft_memccpy;
	int		i;

	str = (char*)malloc(sizeof(str) * (10 + 1));
	str1 = (char*)malloc(sizeof(str) * (10 + 1));
	str2 = (char*)malloc(sizeof(str) * (10 + 1));
	str3 = (char*)malloc(sizeof(str) * (10 + 1));
	str4 = (char*)malloc(sizeof(str) * (10 + 1));
	str5 = strdup("0123456789");
	i = 0;
	while (i < 10)
	{
		str[i] = 'A';
		str1[i] = 'B';
		str2[i] = 'B';
		str3[i] = 'D';
		str4[i] = 'E';
		i++;
	}
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
	printf("\n\n	--- memcpy ---\n\n");
	memcpy(str3, str, 4);
	ft_memcpy(str4, str, 4);
	printf("Result memcpy : %s\nResult ft_memcpy : %s", str3, str4);

//tests memccpy
	printf("\n\n	--- memccpy ---\n\n");
	str_memccpy = memccpy(str3, str5, 48 + 7, 15);
	str_ft_memccpy = ft_memccpy(str4, str5, 48 + 7, 15);
	printf("Result memccpy : %s\nResult ft_memccpy : %s\nString returned memccpy : %s\nString returned ft_memccpy : %s", str3, str4, str_memccpy, str_ft_memccpy);


//tests memmove


//tests memchr


//tests memcmp


//tests strlen
	printf("\n\n	--- strlen ---\n\n");
	printf("Result strlen : %lu\nResult ft_strlen : %d", strlen(str), ft_strlen(str));

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


//tests tolower

}
