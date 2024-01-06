/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:55:35 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/18 16:05:42 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

int	ft_atoi(const char *str)
{
	int	n;
	int	res;

	n = 0;
	res = 0;
	while (str[n] != '\0' && str[n] >= 48 && str[n] <= 57)
	{
		res *= 10;
		res += str[n] - '0';
		n++;
	}
	return (res);
}

void	print_hex(unsigned int num)
{
	if (num >= 16)
	{
		print_hex(num / 16);
		print_hex(num % 16);
	}
	else
	{
		if (num <= 9)
			putchar(num + '0');
		else
			putchar(num - 10 + 'a');
	}
}
int	main(int argc, char **argv)
{
	int n;

	if (argc == 2)
	{
		n = ft_atoi(argv[argc -1]);
		print_hex(n);
	}
	write (1, "\n", 1);
	return;
}
