/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:34:35 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/31 12:36:17 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *str)
{
	int		i;
	int		sin;
	long	res;

	i = 0;
	sin = 1;
	res = 0;
	if (str[i] == 45)
	{
		sin *= -1;
		i++;
	}
	while (str[i] == 45 || str[i] == 43)
		i++;
	while ((str[i] != '\0') && (str[i] >= 48 && str[i] <= 57))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * sin);
}
