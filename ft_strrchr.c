/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:47:12 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/05 14:41:58 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*b;
	char	*start;

	b = (char *)s;
	start = b;
	b += ft_strlen(b);
	if (c == 0 && *start == 0)
		return (start);
	while (b >= start)
	{
		if (*b == (char)c)
		{
			return (b);
		}
		b--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
        printf("%s\n", ft_strrchr("hello world", 'l'));
        printf("%s\n", ft_strrchr("asdfgh jkl;źvcv", 'v'));
        printf("%s\n", ft_strrchr("hey hey", 270));

}*/
