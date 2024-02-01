/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:51:54 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/10 15:18:51 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2++)
			return ((int)((unsigned char)*s1 - (unsigned char)*(--s2)));
		if (!*s1++)
			return (0);
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	stg1[] = {"testss"};
	char	stg2[] = {"test"};
	int	a;
	int	b;

	a = ft_strncmp(stg1, stg2, 7);
	printf("a=%i\n", a);
	b = strncmp(stg1, stg2, 7);
	printf("b=%i", b);
}*/
