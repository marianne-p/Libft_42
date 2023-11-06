/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:19:36 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/03 19:56:12 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*joiner(char *str1, char *str2, int len, char *res)
{
	int	i;
	int	j;

	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (res);
	i = 0;
	j = 0;
	while (str1[i])
	{
		res[i] = str1[i];
		i++;
	}
	while (str2[j])
	{
		res[i] = str2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*res;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	str1 = (char *)s1;
	str2 = (char *)s2;
	res = NULL;
	len = ft_strlen(str1) + ft_strlen(str2);
	res = joiner(str1, str2, len, res);
	return (res);
}
