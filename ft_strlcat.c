/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:45:04 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/11/12 13:11:06 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stddef.h>
#include<string.h>
//#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[j])
		j++;
	while (src[i] && i + j < dstsize - 1 && dstsize != 0)
	{
		*(char *)(dst + (i + j)) = *(char *)(src + i);
		i++;
	}
	*(dst + (j + i)) = '\0';
	while (src[i])
		i++;
	if (j > dstsize)
		return (i + dstsize);
	return (i + j);
}
/*
int main()
{
	char	*dest = "ayoub";
	char	src[8] = "houssam";

	printf("%zu\n",strlcat(dest,src,13));
	printf("%s",dest);
	
	return (0);
}*/
