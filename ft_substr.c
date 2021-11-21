/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:34:46 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/11/16 11:21:20 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!s)
		return (NULL);
	if (start < ft_strlen(s))
	{
		if (ft_strlen(s) < len)
			len = ft_strlen(s);
		ptr = (char *)malloc(len + 1);
		if (!ptr)
			return (NULL);
		while (i < len)
			ptr[i++] = s[start++];
	}
	else
		ptr = malloc(1);
	if (!ptr)
		return (ptr);
	*(ptr + i) = 0;
	return (ptr);
}

int main()
{
	char s[20] = "ayoub";
	printf("%s",ft_substr(s,1,7));
	return (0);
}
