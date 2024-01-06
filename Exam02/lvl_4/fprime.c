/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:44:05 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/20 19:19:26 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	isprime(int n)
{
	int i = 2;

	while (i <= (n / i))
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	fprime(int n)
{
	int div = 2;

	while (div <= n)
	{
		if (isprime(div) == 1)
		{
			if (n % div == 0)
			{
				printf("%i", div);
				if (n != div)
					printf("*");
				n /= div;
			}
			else
				div++;
		}
		else
			div++;
	}
	if (div - 1 == n)
		printf("%i", n);
	return ;
}


int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[argc - 1]));
	printf("\n");
	return (0);
}
