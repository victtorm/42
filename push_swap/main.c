/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:41:03 by vbritto-          #+#    #+#             */
/*   Updated: 2024/02/01 13:43:53 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;

	if (argc <= 2)
	{
		if ((argv[1][0] == ' ') || (argc < 2))
			return (0);
		argv = ft_split(argv [argc - 1], ' ');
	}
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
