/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:38:29 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/19 18:00:26 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int i)
{
	char num;

	if (i >= 10)
		ft_putnbr(i / 10);
	num = (i % 10) + '0';
	write(1, &num, 1);
}

int	main()
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 15) == 0)
			write (1, "fizzbuzz", 8);
			else if ((i % 3) == 0)
				write (1, "fizz", 4);
			else if ((i % 5) == 0)
				write (1, "buzz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
