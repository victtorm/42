/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:27:37 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/17 13:09:34 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	if (!src && !dest)
		return (dest);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
/*
int main()
{
    const char    src[] = "moraes134";
    const char  src1[] = "moraes245";
    char    dest[] = "victtor";
    char    dest1[] = "victtor";

  //  printf("%s\n", (char *)memcpy((void *)dest, src, sizeof(src)));
    printf("%s", (char *)ft_memcpy((void *)dest1, src1, 4));
}*/
