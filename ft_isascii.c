/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:52:13 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/17 20:24:38 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	c;
	int	i;

	c = '\0';
	i = 0;
	printf("STARTING BELLOW \\0 \n\n");
	while (i >= -10)
	{	printf("Printing char %c Libc isascii = %d\n", c, isascii(c));		
		printf("Printing char %c ft_isascii   = %d\n\n", c, ft_isascii(c));
		i--;
		c--;
	}
	printf("\n\n");
	c = '\0';
	i = 0;
	printf("STARTING ABOVE \\0 \n\n");
	while (i <= 150)
	{
		printf("Printing char %c Libc isascii = %d\n", c, isascii(c));
		printf("Printing char %c ft_isascii   = %d\n\n", c, ft_isascii(c));
		i++;
		c++;
	}


}
*/
