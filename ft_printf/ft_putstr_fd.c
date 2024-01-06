/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:48:56 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/31 12:25:11 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	n;

	n = 0;
	while (s[n] != '\0')
	{
		write(fd, &s[n], 1);
		n++;
	}
}
/*
int main(int argc, char *argv[])
{
	ft_putstr_fd(argv[argc - 1], 1);
}*/
