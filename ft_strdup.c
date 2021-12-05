/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:09:30 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/11/14 16:42:52 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*src)
{
	int		i;
	int		j;
	char	*dest;
	char	*p;

	i = 0;
	p = (char *)src;
	while (p[i] != 0)
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	j = 0;
	while (j < i)
	{
		dest[j] = p[j];
		j++;
	}
	dest[j] = 0;
	return (dest);
}
