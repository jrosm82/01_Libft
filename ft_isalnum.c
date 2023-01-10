/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:34:08 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/09 19:48:33 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c);

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (8);
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
		printf("Printing char %c Libc isalnum = %d\n", c, isalnum(c));
		printf("Printing char %c ft_alnum     = %d\n\n", c, ft_isalnum(c));
		c++;
	}
}
*/
