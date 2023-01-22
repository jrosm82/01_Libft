/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 21:24:46 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/22 08:12:50 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	destlen;
	size_t	i;

	srclen = 0;
	destlen = 0;
	while (src[srclen] != '\0')
		srclen++;
	if (size == 0)
		return (srclen);
	while (dest[destlen] != '\0' && destlen < size)
		destlen++;
	if (destlen == size)
		return (srclen + size);
	i = destlen;
	while (src[i - destlen] != '\0' && i < size - 1)
	{
		dest[i] = src[i - destlen];
		i++;
	}
	dest[i] = '\0';
	return (destlen + srclen);
}
