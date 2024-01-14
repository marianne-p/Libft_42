/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:55:06 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/11 14:06:13 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (size == 0 || nmemb == 0)
		mem = malloc(0);
	if (size != 0 && nmemb > ((size_t)(-1)) / size)
		return (NULL);
	mem = malloc(size * nmemb);
	if (mem != NULL)
		ft_bzero(mem, size * nmemb);
	return (mem);
}
/*
#include <stdio.h>

int	main (void)
{
	char	*res;

	res = (char *)ft_calloc(((size_t)(-1)), 3);
	if (res == NULL)
		printf("NULL\n");
	else 
		printf("%s\n", res);
	printf("%zu\n", ((size_t)(-1)));
	printf("%zu\n", ((size_t)(-1) + 5));
	printf("%zu\n", ((size_t)(-1) * 3));
}
*/
