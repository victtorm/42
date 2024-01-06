/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 11:32:10 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/22 12:33:41 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void putnbr(int n)
{
	char num = 0;

	if (n >= 10)
		putnbr(n /10);
	num += (n % 10) + '0';
	write (1, &num, 1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;

	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res);
}

int main(int argc, char **argv)
{
	int i = 1;
	int num;
	int res;

	if (argc == 2)
	{
		num = ft_atoi(argv [argc - 1]);
		while (i <= 9)
		{
			putnbr(i);
			write(1, " x ", 3);
			putnbr(num);
			res = i * num;
			write (1, " = ", 3);
			putnbr(res);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
