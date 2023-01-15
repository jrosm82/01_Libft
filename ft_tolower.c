/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:11:43 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/15 17:13:38 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c);

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char c = 'M';

	printf("%c -> %c\n",c, (char)ft_tolower(c));
	return (0);
}*/