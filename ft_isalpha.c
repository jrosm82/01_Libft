/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:34:53 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/17 20:23:38 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
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
		printf("Printing ASCII char %c Libc isalpha = [%d] \n", c , isalpha(c));
		printf("Printing ASCII char %c ft_isalpha   = [%d] \n\n", c, ft_isalpha(c));
		c++;
	}
	return (0);
}
*/
