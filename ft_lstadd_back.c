/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:04:51 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/24 13:51:11 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*actual;

	if (lst)
	{
		if  (!*lst)
			*lst = new;
		else
		{
			actual = *lst;
			while (actual->next != NULL)
				actual = actual->next;
			actual->next = new;
		}
	}	
}
