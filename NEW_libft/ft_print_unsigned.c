/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:16:14 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/31 12:25:00 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int num)
{
	int		len;
	char	*numchar;

	len = 0;
	if (num == 0)
	{
		ft_putchar_fd('0', 1);
		len++;
	}
	else
	{
		numchar = ft_unsigned_itoa(num);
		len += ft_print_str(numchar);
		free(numchar);
	}
	return (len);
}
