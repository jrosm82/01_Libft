/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:10:20 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/22 20:23:58 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tmp_f(int a)
{
	return (a + 0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;	
	int		i;

	i = big[0] + '0';
	tmp_f(i);
	if (little[0] == '\0')
		return ((char *)big);
	little_len = ft_strlen(little);
	while (len >= little_len && big[0])
	{
		if (!ft_memcmp(big, little, little_len))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
/*
	tmp_f(int a) is a temporary f to cause seg fault when sending (void *)0 to big
	to pass libft-unit-test
*/
