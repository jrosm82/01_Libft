/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:13:02 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/22 13:02:23 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	nbr;
	int	i;
	int	minus;

	i = 0;
	nbr = 0;
	minus = 1;
	while (nptr[i] == '\t' || nptr[i] == '\v' || nptr[i] == '\n'
		|| nptr[i] == '\r' || nptr[i] == '\f' || nptr[i] == ' ')
	{
			i++;
	}
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			minus = -1;
	}
	while (nptr[i] != '\0' && (nptr[i] >= '0' && nptr[i] <= '9'))
	{		
		nbr *= 10;
		nbr += nptr[i] - 48;
		i++;
	}
	return (nbr * minus);
}
/*
#include <stdio.h>

int	main()
{
	char	str[] = " +100a";
	printf("ATOI    = [%d]\n", atoi(str));
	printf("FT_ATOI = [%d]\n", ft_atoi(str));



}*/