/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:40:34 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/19 19:12:25 by vbritto-         ###   ########.fr       */
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

int	isprime(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	while (i <= (n / i))
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	add_prime(int n)
{
	int i = 2;
	int sum;

	while (i <= n)
	{
		if (isprime(i) == 1)
			sum += i;
		i++;
	}
	return (sum);
}



int	main(int argc, char **argv)
{
	int sum;
	if (argc == 2)
	{
		sum = add_prime(argv[argc - 1]);
		ft_putnbr(sum);
	}
	write (1, "\n", 1);
	return (0);
}
