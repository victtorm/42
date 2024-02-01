/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:48:46 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/22 12:21:55 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*ptn;

	if (!lst || !f || !del)
		return (NULL);
	list = ft_lstnew(f(lst->content));
	if (!list)
		return (NULL);
	ptn = list;
	lst = lst->next;
	while (lst)
	{
		ptn->next = ft_lstnew(f(lst->content));
		if (!ptn->next)
		{
			ft_lstclear(&list, del);
			return (0);
		}
		ptn = ptn->next;
		lst = lst->next;
	}
	ptn->next = NULL;
	return (list);
}
