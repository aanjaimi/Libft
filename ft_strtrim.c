/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aanjaimi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:31:54 by aanjaimi          #+#    #+#             */
/*   Updated: 2021/11/15 15:58:33 by aanjaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_test_char(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (*(set + i) != c)
			i++;
		else
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		k;
	int		j;
	int		i;
	int		x;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	k = ft_strlen(s1);
	while (ft_test_char(s1[i], set) && *s1 != 0)
		i++;
	while (ft_test_char(s1[k - 1], set) && k >= 0)
		k--;
	x = k - i;
	if (x <= 0)
		return (ft_strdup(""));
	ptr = (char *)malloc(x + 1);
	if (!ptr)
		return (NULL);
	while (j < x)
		ptr[j++] = s1[i++];
	ptr[j] = 0;
	return (ptr);
}
