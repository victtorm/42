/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:47:07 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/10 14:38:47 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;

	a = (const unsigned char *)s1;
	b = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*a != *b)
			return ((int)*(a) - (int)*(b));
		n--;
		a++;
		b++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char	stg1[] = {"123456A"};
	char	stg2[] = {"123456"};
	int	a;
	int	b;


	a = ft_memcmp(stg1, stg2, 8);
	printf("a=%i\n", a);
	b = memcmp(stg1, stg2, 8);
	printf("b=%i", b);
}*/
