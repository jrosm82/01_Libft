/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:07:43 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/11 18:08:25 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "teststring";
	printf("Printing string before clearing - %s\n", str);
	ft_strclr(str);
	printf("Printing string after clearing - %s\n", str);
}*/
