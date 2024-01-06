/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:44:44 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/12 15:02:02 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	sin;
	int	res;

	n = 0;
	sin = 1;
	res = 0;
	while (str[n] == 32 || (str[n] >= 9 && str[n] <= 13))
		n++;
	if (str[n] == 45 || str[n] == 43)
	{
		if (str[n] == 45)
			sin *= -1;
		n++;
	}
	while (str[n] != '\0' && str[n] >= 48 && str[n] <= 57)
	{
		res *= 10;
		res += str[n] - '0';
		n++;
	}
	return (res * sin);
}
