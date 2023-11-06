/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:41:24 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/03 18:42:22 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	s;

	s = 0;
	while (s < n)
	{
		if (s1[s] == s2[s])
		{
			s++;
		}
		else if (s1[s] > s2[s])
			return (1);
		else if (s1[s] < s2[s])
			return (-1);
	}
	return (0);
}
