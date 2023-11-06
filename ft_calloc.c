/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:55:06 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/04 20:15:00 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (size == 0 || nmemb == 0)
		mem = malloc(1);
	else if (nmemb > sizeof(size_t) / size)
		return (NULL);
	else
		mem = malloc(size * nmemb);
	if (mem != NULL)
		ft_bzero(mem, size * nmemb);
	return (mem);
}
