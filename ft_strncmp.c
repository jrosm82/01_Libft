/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:07:07 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/17 20:28:57 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && i < n - 1 && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	const char str1[] = "string1";
	const char str2[] = "atring1";
	int size = 1;
	
	printf("strncmp size[%d] of str1[%s] and str2[%s] is
	 [%d]\n", size, str1, str2, strncmp(str1, str2, size));
	printf("ft_strncmp size[%d] of str1[%s] and str2[%s] is
	 [%d]\n", size, str1, str2, ft_strncmp(str1, str2, size));




	return (0);
}*/
