/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:27:51 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/24 12:56:58 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*actual;

	if (!lst)
		return (0);
	actual = lst;
	count = 0;
	while (actual != NULL)
	{
		actual = actual->next;
		count++;
	}
	return (count);
}
