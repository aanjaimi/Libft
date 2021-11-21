/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:17:05 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/11/17 15:44:29 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i != dstsize - 1)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
		*(dst + i) = 0;
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int main()
{
	size_t k;
	char s1[15] = "houssam";
	char s2[] = "ayoub anjaimi";
	k = ft_strlcpy(s1,s2,10);
	printf("%zu\n",k);
	printf("%zu",strlcpy(s1,s2,10));
	return(0);
}*/
