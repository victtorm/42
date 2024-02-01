/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:05:57 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/31 12:24:24 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int num)
{
	int		len;
	char	*numchar;

	len = 0;
	numchar = ft_itoa(num);
	len = ft_print_str(numchar);
	free(numchar);
	return (len);
}
