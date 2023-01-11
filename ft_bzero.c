/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:51:34 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/11 20:12:31 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n);

void	ft_bzero(void *s, size_t n)
{
	unsigned long	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int i = 5;	

	char	str[] = "This is a testing string";
	printf("Printing testing string [%s]\n", str);
	printf("Setting char [\\0] %dx to string \n", i);
	ft_bzero(str, i);
	printf("Printing string after memset [%s]", str);
	return (0);
}
*/
