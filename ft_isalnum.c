/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:56:52 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/04 17:24:09 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	unsigned char	j;

	j = (unsigned char)i;
	if (ft_isalpha(j) || ft_isdigit(j))
		return (1);
	return (0);
}
