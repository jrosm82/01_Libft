/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrosmari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:09:23 by jrosmari          #+#    #+#             */
/*   Updated: 2023/01/21 15:36:44 by jrosmari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{	
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

typedef	struct
{
	char name[256];
	int age;
	double money;
}	emp;

int	main(void)
{
	char src[] = ")#$#@ This is just a $43# string     e2342 ";
	char dest[100];

	ft_memcpy(dest, src, strlen(src) + 1);
	printf("Source      string = %s\n",src);	
	printf("Destination string = %s\n",dest);

	double srcarr[3] = {8.2, 4.55, 8.698};
	double destarr[5];

	char *dest_arr = ft_memcpy(destarr,srcarr, sizeof(srcarr));

	for (int i = 0; i < 3; i++)
	{
		printf("destarray[%d] = %f\n", i, destarr[i]);
	}
	printf("destarr  = %p\n", destarr);
	printf("dest_arr = %p\n", dest_arr);


	emp emp1;
	strcpy(emp1.name,"John Doe");
	emp1.age = 10;
	emp1.money = 153.40;	

	emp emp2;
	ft_memcpy(&emp2, &emp1, sizeof(emp1));

	printf("emp 2 name = %s\n", emp2.name);
	printf("emp 2 age = %d\n", emp2.age);
	printf("emp 2 average = %f\n", emp2.money);

	return (0);
}*/