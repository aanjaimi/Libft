/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 12:25:06 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/11/16 11:10:52 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*s;

	i = 0;
	p = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst > src)
	{
		while (i < len)
		{
			*(p + len - 1) = *(s + len - 1);
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
