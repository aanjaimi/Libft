/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:05:41 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/11/17 16:52:51 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (0);
}
/*
int main()
{
	char *p;
	p = ft_strchr("My name is ayoub anjaimi",'\0');
	printf("%s\n",p);
	char *s;
	s = strchr("My name is ayoub anjaimi",'\0');
	printf("%s\n",s);
	return(0);
}*/
