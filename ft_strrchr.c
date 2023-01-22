/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:28:31 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/22 07:26:41 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	c = c & 255;
	i = 0;
	while (*s != '\0')
	{		
		i++;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	s--;
	i--;
	while (i > -1)
	{		
		if (*s == c)
			return ((char *)s);
		s--;
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char str[] = "String to test String to test";
	char c = 'S';

	char *ft_occ = ft_strrchr(str,c);
	printf("ft_strrchr function\n");
	printf("printing string [%s] with last occurence of char [%c]\n",str, c);	
	printf("result = [%s]\n\n", ft_occ);

	char *occ = strrchr(str,c);
	printf("strchr function\n");
	printf("printing string [%s] with last occurence of char [%c]\n",str, c);
	printf("result = [%s]\n\n", occ);	

	return (0);
}*/
