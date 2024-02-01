/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:28:46 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/31 18:04:19 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <limits.h>

/*
typedef struct s_list
{
	int				n;
	struct s_list	*prev;
	struct s_list	*next;
}	t_list;*/

void	push_swap(t_list *a);

//  check

int		check(char **str);
int		check_2(char **str);
int		check_3(char **str);

//  list_func

t_list		*list(char **str);
t_list		*new_node(char **str);


// moves

void	swap(t_list *stack);
void	rotate(t_list *stack);
void	rev_rotate(t_list *stack);


#endif
