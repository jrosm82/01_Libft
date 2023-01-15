/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:28:31 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/15 16:31:56 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{		
		i++;
		s++;		
	}
	s--,
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