/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:40:07 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/22 12:36:29 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*pnt;

	if (lst)
	{
		while (*lst)
		{
			pnt = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = pnt;
		}
	}
}
