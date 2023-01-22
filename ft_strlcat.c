/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:24:46 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/22 07:23:29 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	srclen = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[srclen] != '\0' && srclen < size - 1)
	{
		dest[i] = src[srclen];
		srclen++;
		i++;
	}
	dest[i]	= '\0';
	return (srclen);
}

int	main(void)
{

	return (0);
}