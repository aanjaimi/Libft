/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:50:03 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/11/16 11:14:40 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (!s1 || !s2)
		return (NULL);
	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		*(ptr + i) = *(s1 + i);
		i++;
	}
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		*(ptr + i) = *(s2 + x);
		i++;
		x++;
	}
	*(ptr + i) = 0;
	return (ptr);
}
/*
int main()
{
	char s1[10] = "ayoub ";
	char s2[10] = "anjaimi";
	printf("%s",ft_strjoin(s1, s2));
	return (0);
}*/
