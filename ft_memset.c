/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:31:23 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/09 15:36:42 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*set;

	i = 0;
	set = (unsigned char *)s;
	while (i < n)
	{
		*(set + i) = (unsigned char)c;
		i++;
	}
	return (s);
}
