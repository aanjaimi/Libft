/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:41:46 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/11/17 16:58:50 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	j;

	j = ft_strlen((char *)s);
	while (j >= 0)
	{
		if (s[j] == (char)c)
			return ((char *)(s + j));
		j--;
	}
	return (0);
}
