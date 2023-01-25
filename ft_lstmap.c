/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:12:24 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/25 09:11:05 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*actual;
	
	if (!lst)
		return NULL;
	actual = ft_lstnew(f(lst->content));
	del(lst->content);		
	lst = lst->next;
	new = actual;	
	while (lst != NULL)
	{
		actual->next = ft_lstnew(f(lst->content));			
		actual = actual->next;
		del(lst->content);
		lst = lst->next;			
	}
	return (new);
}
