/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:16:19 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/11/17 17:37:03 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if ((char)c == '\0' && n == 0)
		return (NULL);
	while (*(char *)(s + i) != (char)c)
	{
		if (n == 0)
			return (NULL);
		if (i < n - 1)
			i++;
		else
			return (NULL);
	}
	return ((char *)(s + i));
}
/*
int main()
{
	const char *s = "ayoub";
	printf("%s\n",ft_memchr(0, 0, 0));
	printf("%s",memchr(0, 0, 0));
	return(0);
}*/
