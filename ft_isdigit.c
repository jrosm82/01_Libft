/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:11:02 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/17 20:24:56 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	c;
	
	c = '!';
	while (c <= '~')
	{
		printf("Is %c digit? Libc isdigit = %d \n", c, isdigit(c));
		printf("Is %c digit? ft_isdigit   = %d \n\n", c, ft_isdigit(c));
		c++;
	}


	return (0);
}
*/
