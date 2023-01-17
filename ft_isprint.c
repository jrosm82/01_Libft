/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:21:49 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/17 20:25:11 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
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
	printf("STARTING PRINTING \\0 \n\n");
	while (i <= 130)
	{
		printf("Printing char %c Libc isprint = %d\n", c, isprint(c));
		printf("Printing char %c ft_isprint   = %d\n\n", c, ft_isprint(c));
		i++;
		c++;
	}
}
*/
