/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:37:06 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/03 18:40:21 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*res;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = (char *)s;
	len = ft_strlen(str) + 1;
	res = (char *)malloc(sizeof(char) * (len));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len - 1)
	{
		res[i] = f(i, str[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
