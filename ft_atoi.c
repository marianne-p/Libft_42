/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:40:43 by mpihur            #+#    #+#             */
/*   Updated: 2023/10/31 20:45:28 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	neg;
	int	pos;

	neg = 1;
	i = 0;
	res = 0;
	while (nptr[i] == ' ' || (nptr[i] > 8 && nptr[i] < 14))
		i++;
	pos = i;
	while (!(nptr[i] >= '0' && nptr[i] <= '9'))
	{
		if (nptr[i] == '-' && neg != -1)
			neg = neg * -1;
		i++;
	}
	if (!(pos + 1 == i && (nptr[pos] == '-' || nptr[pos] == '+')) || pos != i)
		return (0);
	while (nptr[i] != '\0' && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * neg);
}
