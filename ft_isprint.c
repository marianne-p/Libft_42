/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:13:48 by mpihur            #+#    #+#             */
/*   Updated: 2024/04/06 16:48:02 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	if (a >= 32 && a < 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	printf("%d\n", ft_isprint('f' - INT_MAX));
	printf("%d\n", ft_isprint(288));
	printf("%d\n", ft_isprint(128));
	
	printf("%d\n", ft_isprint(-1));
	printf("%d\n", ft_isprint(130));
}*/
