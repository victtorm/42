/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:57:29 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/20 17:51:36 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	mulbase(char a)
{
	char base [] = "0123456789abcdef";
	int i = 0;

	if (a >= 65 && a <= 90)
		a += 32;
	while (base[i] != '\0')
	{
		if (base [i] == a)
			return (i);
		i++;
	}
	return (0);
}
int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int sin = 1;
	int res = 0;

	if (str [i] == 45)
	{
		sin *= -1;
		i++;
	}
	while ((str[i] != '\0') && ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 70) || (str[i] >= 97 && str[i] <= 102)))
		{
			res *= str_base;
			res += mulbase(str[i]);
			i++;
		}
		return (res * sin);
}
/*
#include<stdio.h>

int main()
{
	printf("%i", ft_atoi_base("---a32", 16));
}
*/
