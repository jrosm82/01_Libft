/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:42:24 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/22 16:21:27 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
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
	int		j;
	int		start;
	int		end;
	char	*trimmed;

	// Find the start and end index of the trimmed string
	i = 0;
	start = 0;
	end = 0;
	while (s1[i] != '\0')
	{
		if (!is_in_set(s1[i], set))
		{
			start = i;
			break ;
		}
		i++;
	}
	i = 0;
	while (s1[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		if (!is_in_set(s1[i], set))
		{
			end = i;
			break ;
		}
		i--;
	}
	if (start == end)
	{
		trimmed = (char *)malloc(sizeof(char));
		if (trimmed == NULL)
			return (NULL);
		trimmed[0] = '\0';
		return (trimmed);
	}
	// Allocate memory for the trimmed string
	trimmed = (char *)malloc(sizeof(char) * (end - start + 2));
	if (trimmed == NULL)
		return (NULL);
	// Copy the trimmed string
	i = start;
	j = 0;
	while (i <= end)
	{
		trimmed[j] = s1[i];
		i++;
		j++;
	}
	trimmed[j] = '\0';
	return (trimmed);
}
/*
#include <stdio.h>

int	main(void)
{
	char const	str[] = "AAAAbbbbbAAAA";
	char const	set[] = "AAAA";
	
	
	printf("%s\n", ft_strtrim(str, set));

	return (0);
}*/