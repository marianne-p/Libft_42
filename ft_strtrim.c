/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:50:44 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/04 17:20:12 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_start(int i, char *s1, char *set)
{
	int	j;

	j = 0;
	while (*(s1 + i))
	{
		if (*(s1 + i) == *(set + j))
		{
			i++;
			j = 0;
		}
		else if (*(set + j) == '\0')
			return (i);
		else
			j++;
	}
	return (-1);
}

static int	check_end(int i, char *s1, char *set)
{
	int	j;

	j = 0;
	while (*(s1 + i))
	{
		if (*(s1 + i) == *(set + j))
		{
			i--;
			j = 0;
		}
		else if (*(set + j) == '\0')
			return (i);
		else
			j++;
	}
	return (-1);
}

static char	*ft_res(char *res)
{
	res = (char *)malloc(sizeof(char) * 1);
	if (res == NULL)
		return (NULL);
	res[0] = '\0';
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	char	*res;
	int		start;
	int		end;
	int		i;

	s = (char *)set;
	res = NULL;
	start = check_start(0, (char *)s1, s);
	end = check_end(ft_strlen((char *)s1) - 1, (char *)s1, s);
	if (start == -1 && end == start)
	{
		res = ft_res(res);
		return (res);
	}
	res = (char *)malloc(sizeof(char) * (end - start + 2));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
		res[i++] = ((char *)s1)[start++];
	res[i] = '\0';
	return (res);
}
