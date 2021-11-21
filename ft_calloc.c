/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:05:10 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/11/14 16:33:04 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stddef.h>
#include<stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	k;

	k = count * size;
	ptr = malloc(k);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, k);
	return (ptr);
}
/*
int main()
{
	char *s;
	s = ft_calloc(4, 3);
	int i = 0;
	while (i < 15)
	{
		printf("%d",s[i]);
		i++;
	}
	return 0;
}*/