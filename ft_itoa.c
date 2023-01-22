/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:44:02 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/22 19:32:03 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int nbr)
{
	int	pos;

	if (nbr == -2147483648)
		return (10);
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		nbr = nbr * -1;
	pos = 0;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		pos++;
	}
	return (pos);
}

static char	*min(int nbr)
{	
	char	*ptr;
	int		i;

	ptr = (char *)malloc(sizeof(char) * 12);
	if (ptr == NULL)
		return (NULL);
	nbr = nbr / (10);
	nbr = nbr * -1;
	ptr[0] = '-';
	ptr[10] = '8';
	ptr[11] = '\0';
	i = 9;
	while (nbr > 0)
	{
		ptr[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	return (ptr);
}

static char	*neg(int nbr)
{
	char	*ptr;
	int		i;

	nbr = nbr * -1;
	i = int_len(nbr) + 1;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	ptr[0] = '-';
	ptr[i] = '\0';
	i--;
	while (nbr > 0)
	{
		ptr[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	return (ptr);
}

static char	*pos(int nbr)
{
	char	*ptr;
	int		i;

	if (nbr == 0)
	{
		ptr = (char *)malloc(sizeof(char) * 2);
		ptr[0] = '0';
		ptr[1] = '\0';
	}
	else
	{	
		i = int_len(nbr);
		ptr = (char *)malloc(sizeof(char) * (i + 1));
		if (ptr == NULL)
			return (NULL);
		ptr[i--] = '\0';
		while (nbr > 0)
		{
			ptr[i--] = (nbr % 10) + '0';
			nbr = nbr / 10;
		}
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	if (n == -2147483648)
		return (min(n));
	else if (n < 0)
		return (neg(n));
	else
		return (pos(n));
}
/*
#include <stdio.h>

int	main(void)
{
	int a = -2147483648;
	printf("Number of positions of number [%d] is [%d]\n\n", a, int_len(a));

	printf("Printing string [%s]\n",ft_itoa(a));
	return (0);
}*/