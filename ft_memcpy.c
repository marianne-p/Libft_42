/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:20:04 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/02 19:24:04 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (d == NULL && s == NULL)
		return (NULL);
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
