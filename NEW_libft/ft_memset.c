/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:55:33 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/10 11:34:16 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)str;
	while (n > 0)
	{
		*a = c;
		a++;
		n--;
	}
	return (str);
}
/*
#include<stdio.h>

int main()
{
    char    str[60] = "123456789123456789";
    char    c = '*';

    printf("%s\n", (char *) memset((void *)str, c, 6*sizeof(char)));
    printf("%s", (char *) ft_memset((void *)str, c, 6*sizeof(char)));
}*/
