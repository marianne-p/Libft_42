/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:45:10 by mpihur            #+#    #+#             */
/*   Updated: 2024/04/03 15:15:10 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*last;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		last = (*lst)->next;
		free((*lst)->content);
		free(*lst);
		*lst = last;
	}
	*lst = NULL;
}
