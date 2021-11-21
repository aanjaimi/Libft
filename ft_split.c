/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:41:37 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/11/17 16:55:58 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "libft.h"

static int	ft_nbr_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && count == 0)
		{
			count = 1;
			i++;
		}
		else if (*s == c)
			count = 0;
		s++;
	}
	return (i);
}

static char	**free_sp(char **sp)
{
	int	i;

	i = 0;
	while (sp[i])
		free(sp[i++]);
	free(sp);
	return (NULL);
}

static char	**ft_return(const char *s, char **sp, char c)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		j = 0;
		while (s[i + j] && s[i + j] != c)
			j++;
		if (j != 0)
			sp[k++] = ft_substr(s, i, j);
		if (j != 0 && !sp[k - 1])
			return (free_sp(sp));
		i += j;
	}
	return (sp);
}

char	**ft_split(char const *s, char c)
{
	char	**sp;

	if (!s)
		return (NULL);
	sp = ft_calloc(ft_nbr_word(s, c) + 1, sizeof(char *));
	if (!sp)
		return (NULL);
	sp = ft_return(s, sp, c);
	return (sp);
}
/*
int main()
{
    int i;
    char s[] = " my name is ayoub anjaimi 1999 ";
    char c = ' ';
    char **p;

    i = 0;
    printf("%d\n",ft_nbr_word(s, c));
    p = ft_split(s, c);
    while (i < ft_nbr_word(s, c))
    {
        printf("%s\n",p[i]);
        i++;
    }
	while (i < ft_nbr_word(s, c))
		printf("%s\n",ft_split(s ,c)[i++]);
    return (0);
}*/
