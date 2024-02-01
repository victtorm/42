/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_itoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:56:59 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/31 12:25:21 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	num_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_unsigned_itoa(unsigned int num)
{
	char	*numchar;
	int		len;

	len = num_len(num);
	numchar = (char *)malloc(sizeof(char) * (len + 1));
	if (!numchar)
		return (NULL);
	numchar[len] = '\0';
	while (num != 0)
	{
		numchar[len - 1] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return (numchar);
}
