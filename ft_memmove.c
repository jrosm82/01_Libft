/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:09:15 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/17 20:27:21 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	 *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL)
		return (NULL);
	if (dest == src)
		return (dest);
	if (dest < src)
		while (i < n)
		{		
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}	
	else
	{	
		i = n;	
		while (--i)
		{
			((unsigned char *)dest)[i - 1] = ((unsigned char *)src)[i- 1];			
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{

	
	int source[10] = {1,2,3,4,5,6,7,8,9,10};
	int destination[10];

	ft_memmove(source + 2, source, sizeof(int) * 8);

	for (int i = 0; i < 10; i++)
	{
		printf("destination[%d]=%d\n", i, (destination)[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		printf("source[%d]=%d\n", i, source[i]);
	}
	return (0);
}*/