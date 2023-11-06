/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:16:46 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/05 15:11:00 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*check_alloc(int length)
{
	char	*res;
       
	res = (char *)malloc(length);
	return (res); 
}

static void	fill_up(int n, int i, char *res)
{
	if (n == -2147483648)
	{
		res[i--] = '8';
		n /= 10;
	}
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		res[i--] = (char)((n % 10) + '0');
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	int		tmp;
	int		length;
	char	*res;

	tmp = n;
	length = 1;
	if (n <= 0)
		length = 2;
	while (tmp)
	{
		length++;
		tmp /= 10;
	}
	res = check_alloc(length);
	if (res  == NULL)
			return (NULL);
	i = length - 1;
	res[i--] = '\0';
	if (n == 0)
	{
		res[i] = '0';
		return (res);
	}
	fill_up(n, i, res);
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n %s\n %s\n", ft_itoa(123456789), ft_itoa(0), ft_itoa(-234));
}*/
