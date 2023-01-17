/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:18:22 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/17 20:27:55 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned long	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i = 8;
	char	c = '@';

	char	str[] = "This is a testing string";
	printf("Printing testing string [%s]\n", str);
	printf("Setting char [%c] %dx to string \n", c, i);
	ft_memset(str, c, i);
	printf("Printing string after memset [%s]", str);
	return (0);
}
*/
