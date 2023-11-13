/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpihur <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:53:17 by mpihur            #+#    #+#             */
/*   Updated: 2023/11/09 15:44:34 by mpihur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew (f(lst->content));
	if (!new)
		return (NULL);
	res = new;
	lst = lst->next;
	while (lst)
	{
		new->next = ft_lstnew(f(lst->content));
		if (new->next == NULL)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		new = new->next;
		lst = lst->next;
	}
	new->next = NULL;
	return (res);
}
