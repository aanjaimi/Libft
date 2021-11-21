/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:30:14 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/11/16 11:15:54 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*p;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (!s)
		return (NULL);
	p = (char *)malloc(i + 1);
	if (!p)
		return (NULL);
	p[i--] = '\0';
	while (i >= 0)
	{
		p[i] = f(i, s[i]);
		i--;
	}
	return (p);
}
/*
char	f(unsigned int i, char c)
{
	c = 'a';
	return (c);
}

int main()
{
	char s[] = "anjaimi";
	printf("%s",ft_strmapi(s,f));
	return (0);
}*/
