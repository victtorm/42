/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:31:08 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/31 16:09:29 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void swap(t_list *stack)
{
	t_list	*tmp;

	if (ft_lstsize(stack) < 2)
		return ;
	tmp = stack;
	stack->number = stack->next->number;
	stack->next->number = tmp->number;
	return ;
}

void	rotate(t_list *stack)
{
	t_list	*tmp;

	if (ft_lstsize(stack) < 2)
		return ;
	tmp = stack;
	stack = stack->next;
	while (stack->next != NULL)
	{
		stack->prev->number = stack->number;
		stack = stack->next;
	}
	stack->number = tmp->number;
	return ;
}
void	rev_rotate(t_list *stack)
{
	t_list	*tmp;
	t_list	*last;
	int i;

	i = ft_lstsize(stack);
	if (i < 2)
		return ;
	last = ft_lstlast(stack);
	tmp = stack;
	stack = stack->prev;
	while (i > 0)
	{
		stack->next->number = stack->number;
		stack = stack->prev;
		i--;
	}
	stack->number = tmp->number;
	return ;
}
/*
void	push(t_list *stack_add, t_list *stack_lost)
{
	t_list	*new;

	new = stack_lost;
	ft_lstadd_front(stack_add, new);
	return ;
}*/
