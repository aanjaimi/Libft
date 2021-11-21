/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:37:29 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/11/17 17:42:34 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stddef.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((!s1 && !s2) || n == 0)
		return (0);
	while (*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))
	{
		if (i < n - 1)
			i++;
		else
			return (0);
	}
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}
/*
int main()
{
	printf("%d\n",ft_memcmp("ayo","ay",0));
	printf("%d\n",memcmp("ayo","ay",0));
	return(0);
}*/
