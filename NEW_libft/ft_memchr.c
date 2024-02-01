/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:53:08 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/10 13:17:26 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)str;
	while (n > 0)
	{
		if (*a == (unsigned char)c)
			return (a);
		n--;
		a++;
	}
	return ((void *)0);
}
/*
#include<stdio.h>

int main()
{
    char    str[60] = "/|\x12\xff\x09\x42\2002\42|\\";
    char    c = '\200';

    printf("%s\n", (char *)memchr((void *)str, c, 10));
    printf("%s", (char *)ft_memchr((void *)str, c, 10));
}*/
