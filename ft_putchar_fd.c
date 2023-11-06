/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:38:58 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/05 19:40:35 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (!(c) || fd < 0)
		return ;
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int fd = open("tripouille", O_RDWR | O_CREAT);
	ft_putchar_fd('a', fd);
	char s[10] = {0}; read(fd, s, 2);
	if (!strcmp(s, "a"))
		printf("ft_putchatOK
	close(fd);
}
*/
