/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:29:50 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/05 17:15:04 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putnbr_fd(-2, fd);
		ft_putnbr_fd(147483648, fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * (-1);
	}
	if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
		return ;
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10 + '0'), fd);
	}
}
/*
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int	a = -2147483648;
	int	fd;

	fd = open("hey.txt", O_RDWR);
	ft_putnbr_fd(a, fd);
	ft_putchar_fd(10, fd);
	a = 0;
	ft_putnbr_fd(a, fd);
	ft_putchar_fd(10, fd);
	a = 1;
	ft_putnbr_fd(a, fd);
	ft_putchar_fd(10, fd);
}
*/
