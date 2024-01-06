/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:19:25 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/09 17:31:54 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (src == dest)
		return (dest);
	if (src > dest)
	{
		while (n > 0)
		{
			*d++ = *s++;
			n--;
		}
		return (dest);
	}
	s += n - 1;
	d += n - 1;
	while (n > 0)
	{
		*d-- = *s--;
		n--;
	}
	return (dest);
}
/*
#include<stdio.h>

int main()
{
    const char    src[] = "moraes12";
    const char  src1[] = "moraes456";
    char    dest[] = "victtor";
    char    dest1[] = "victtor";

    printf("%s\n", (char *)memmove((void *)dest, src, sizeof(src)));
    printf("%s", (char *)ft_memmove((void *)dest1, src1, sizeof(src1)));
}*/
