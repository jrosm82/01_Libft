/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:45:08 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/15 14:10:11 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{		
	while (s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char str[] = "String to find";
	char c = 'd';

	char *occ = strchr(str,c);
	printf("strchr function\n");
	printf("printing string [%s] with first occurence of char [%c]\n",str, c);
	printf("result = [%s]\n\n", occ);

	printf("ft_strchr function\n");
	printf("printing string [%s] with first occurence of char [%c]\n",str, c);
	char *ft_occ = strchr(str,c);
	printf("result = [%s]\n\n", ft_occ);

	return (0);
}*/