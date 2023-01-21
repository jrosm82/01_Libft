/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:45:08 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/21 17:23:27 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = c & 255;
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char str[] = "String to find String to find";
	char c = 'S';

	char *occ = strchr(str,c);
	printf("strchr function\n");
	printf("printing string [%s] with first occurence of char [%c]\n",str, c);
	printf("result = [%s]\n\n", occ);

	printf("ft_strchr function\n");
	printf("printing string [%s] with first occurence of char [%c]\n",str, c);
	char *ft_occ = ft_strchr(str,c);
	printf("result = [%s]\n\n", ft_occ);
	if (ft_occ == NULL)
		printf("NULL");

	return (0);
}*/