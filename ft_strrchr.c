/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:28:31 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/21 15:17:57 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return ('\0');
	while (*s != '\0')
	{		
		i++;
		s++;
	}
	s--;
	i--;
	while (i > -1)
	{		
		if (*s == c)
			return ((char *)s);
		s--;
		i--;
	}
	if (c == '\0')
		return ((char *)s);
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