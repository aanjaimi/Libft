/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:48:13 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/11/04 16:33:11 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*int main()
{
	printf("%d",isalnum(49));
}*/
