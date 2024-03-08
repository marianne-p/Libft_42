/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:49:01 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/11 20:23:25 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	printer(void	*content)
{
	write(1, content, ft_strlen(content));
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f (lst->content);
		lst = lst->next;
	}
}
/*
int	main(void)
{
	t_list	*lst;

	lst->content = "hey\n";
	lst->next = NULL;
	ft_lstiter(lst, printer);
}
*/