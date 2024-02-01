/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:40:05 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/31 16:08:06 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*new_node(char **str)
{
	t_list	*node;

	node = NULL;
	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->number = ft_atoi(*str);
	node->target = NULL;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

t_list	*list(char **str)
{
	t_list	*new;
	t_list	*tmp;
	t_list	**begin;

	begin = NULL;
	new = new_node(str);
	str++;
	*begin = new;
	while (*str)
	{
		tmp = new;
		new = new_node(str);
		new->prev = tmp;
		ft_lstadd_back(begin, new);
		str++;
	}
	return (*begin);
}
