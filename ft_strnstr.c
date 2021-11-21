/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:46:01 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/11/16 10:51:45 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stddef.h>
#include<string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	k;
	size_t	i;
	size_t	j;

	if (*needle == 0)
		return ((char *)haystack);
	i = 0;
	k = ft_strlen(needle);
	while ((haystack[i] != '\0') && (i < len - k + 1))
	{
		if (len == 0)
			return (0);
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	char *s;
	s = ft_strnstr("My name is ayoub anjaimi","ayoub",12);
	printf("%s",s);
	return(0);
}*/
