/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:28:50 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/31 16:01:37 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list *a)
{
	(void)a;
	return ;
}

int	main(int argc, char **argv)
{
	t_list	*a;

	if (argc == 2)
		argv = ft_split(argv [argc - 1], ' ');
	else
		argv++;
	if (!check(argv))
	{
		return (0);
	}
	a = list(argv);
	push_swap(a);
	return (0);
}
