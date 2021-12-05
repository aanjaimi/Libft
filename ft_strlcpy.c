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
