/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:31:47 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/14 16:20:51 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (n);
}
/*
#include <bsd/string.h>

int main()
{
	char stg1[] = "run forest ruuuun!!";
	char stg2[] = "bubbagump";
	unsigned int size = 7;

	printf("%d\n", ft_strlcpy(stg2, stg1, size));
	printf("%zu\n", strlcpy(stg2, stg1, size));
}*/
