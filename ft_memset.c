/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:55:19 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/11/17 14:33:26 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stddef.h>
#include<string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)b;
	while (len-- > 0)
	{
		*str = c;
		str++;
	}
	return (b);
}
/*
int main()
{
	unsigned char s[] = "ayoub anjaimi 9";
	printf("%s\n",memset(s, '0', 15));
	printf("%s",ft_memset(s, '0', 15));
	return(0);
}*/
