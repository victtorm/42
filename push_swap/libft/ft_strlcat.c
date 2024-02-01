/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:10:11 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/14 13:30:42 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_dest;
	unsigned int	len_src;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	len_dest = j;
	len_src = ft_strlen(src);
	if (size == 0 || size <= len_dest)
		return (len_src + size);
	while (src[i] != '\0' && i < size - len_dest - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (len_dest + len_src);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	str1[] = "123456";
	char	str2[] = "7890";
	
	//printf("%d\n", strlcat(str1, str2, 2));
	printf("%d", ft_strlcat(str1, str2, 2));
}
*/