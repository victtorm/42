/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:27:59 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/22 12:38:41 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nlst;

	nlst = (t_list *)malloc(sizeof(t_list));
	if (!nlst)
		return (NULL);
	nlst->content = content;
	nlst->next = NULL;
	return (nlst);
}
