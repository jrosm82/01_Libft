/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:42:24 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/23 22:49:25 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_str(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		left;
	int		right;
	char	*str;

	if (ft_strncmp(s1, "", 1) == 0)
	{
		str = ft_calloc(1, 1);
		return (str);
	}
	i = 0;
	while (in_str(set, s1[i]) == 1 && s1[i] != '\0')
		i++;
	if (s1[i] == '\0')
	{
		str = ft_calloc(1, 1);
		return (str);
	}
	left = i;
	right = ft_strlen(s1) - 1;
	while (in_str(set, s1[right]) == 1 && right > left)
		right--;
	str = ft_substr(s1, left, right - left + 1);
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char const	str[] = "abxfg";
	char const	set[] = "x";
	
	
	printf("[%s]\n", ft_strtrim(str, set));

	return (0);
}*/