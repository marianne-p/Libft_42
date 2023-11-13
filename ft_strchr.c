/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:05:53 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/09 15:36:23 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	b;
	int		i;
	char	*set;

	b = c;
	set = (char *)s;
	i = 0;
	while (set[i] != '\0')
	{
		if (*(set + i) == b)
		{
			return (set + i);
		}
		i++;
	}
	if (c == 0)
		return (set + ft_strlen(set));
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strchr("hello world", 'l'));
	printf("%s\n", ft_strchr("asdfgh jkl;źvcv", 'f'));
	printf("%s\n", ft_strchr("hey hey", 270));
}*/
