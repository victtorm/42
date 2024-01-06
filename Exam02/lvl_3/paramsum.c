/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:13:51 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/20 15:17:38 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char d;

	if (n >= 10)
		ft_putnbr(n / 10);
	d = (n % 10) + '0';
	write(1, &d, 1);
}

int	main(int argc, char **argv)
{
	ft_putnbr(argc - 1);
	write (1, "\n", 1);
	return (0);
}
