/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:25:04 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/09 17:34:06 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *str, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (str[j] && i + j + 1 < size)
	{
		dst[i + j] = str[j];
		j++;
	}
	if (i + j < size)
		dst[i + j] = '\0';
	while (str[j])
		j++;
	return (i + j);
}
