/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:11:35 by mpihur            #+#    #+#             */
/*   Updated: 2024/07/18 18:02:28 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char	*res;
	char	*str;
	int		len;
	int		count;

	count = 0;
	str = (char *)s;
	len = ft_strlen(str);
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	while (count < len)
	{
		res[count] = str[count];
		count++;
	}
	res[len] = '\0';
	return (res);
}
