/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:31:04 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/23 13:56:34 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wrd_cnt(char const *s, char c)
{

	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	if (c == '\0' || s == NULL)
		return (0);
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c)
			cnt++;
		i++;
	}
	if (s[i - 1] != c)
		cnt++;
	return (cnt);
}

static char	**write_split(char **split, char const *s, char c)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 0;
			while (s[i + j] != c && s[i + j] != '\0')
				j++;
			split[word] = (char*)malloc(sizeof(char) * (j + 1));
			if (split[word] == NULL)
				return (NULL);
			j = 0;
			while (s[i] != c && s[i] != '\0')
			{
				split[word][j] = s[i];
				i++;
				j++;
			}
			split[word][j] = '\0';
			word++;
		}
	}
	return(split);
}

char	**ft_split(char const *s, char c)
{
	
	char	**split;
	int		words;
	
	if (s == NULL)
		return (NULL);	
	if (!s)
		return (NULL);
	words = wrd_cnt(s, c);
	split = (char**)malloc(sizeof(char*) * (words + 1));
	if (split == NULL)
		return (NULL);
	split[words] = 0;
	if (words != 0)
		write_split(split, s, c);
	return (split);
}
/*
#include <stdio.h>

int	main(void)
{
	int i = 0;
	char	sep = ' ';
	char	str[] = "      split       this for   me  !       ";
		

	char	**res = ft_split(str, sep);
	while (res[i] != NULL)
	{
		printf("WORD [%d] = [%s]\n", i, res[i]);
		i++;


	}


	return (0);
}*/
