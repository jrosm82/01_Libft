/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:12:24 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/24 15:33:14 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*actual;
	t_list	*new;

	if (lst)
	{
		actual = lst;
		new = ft_lstnew(f(actual->content));
		while (actual->next != NULL)
		{
			new = ft_lstnew(f(actual->content));
			del(actual->content);
			actual = actual->next;
		}
	}
	return (new);
}
