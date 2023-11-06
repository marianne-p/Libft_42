/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:25:04 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/04 19:46:12 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *str, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
/*	if (i <= size && i < ft_strlen(dst))
		return (i);*/
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
