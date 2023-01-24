/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:34:00 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/24 15:08:04 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*actual;	

	if (lst)
	{		
		while (*lst)
		{
			actual = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			(*lst) = actual;
		}		
	}
	lst = NULL;
}
