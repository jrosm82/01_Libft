/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:12:24 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/25 15:23:39 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*actual;
	t_list	*new;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	actual = new;
	lst = lst->next;
	while (lst != NULL)
	{
		actual->next = ft_lstnew(f(lst->content));
		if (!actual)
			del(lst);
		actual = actual->next;
		lst = lst->next;
	}
	return (new);
}
