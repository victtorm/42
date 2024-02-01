/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:27:15 by vbritto-          #+#    #+#             */
/*   Updated: 2023/09/10 15:13:40 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1); 
	return (nb * (ft_recursive_factorial(nb - 1)));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_factorial(0));
}*/
