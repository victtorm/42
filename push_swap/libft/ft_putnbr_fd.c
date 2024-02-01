/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:20:59 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/12 14:48:26 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	i;

	i = n;
	if (i < 0)
	{
		c = '-';
		write(fd, &c, 1);
		i = i * -1;
	}
	if (i >= 10)
	{
		ft_putnbr_fd (i / 10, fd);
		ft_putnbr_fd (i % 10, fd);
	}
	else
	{
		c = i + '0';
		write(fd, &c, 1);
	}
}
/*
int main()
{
    ft_putnbr_fd(-57, 2);
}*/
