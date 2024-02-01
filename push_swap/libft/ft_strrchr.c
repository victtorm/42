/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:51:47 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/10 17:17:49 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	i++;
	while (i-- > 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
	}
	return ((char *)0);
}
/*
#include<string.h>
#include<stdio.h>

int main()
{
    char    str[] = "abbbbbbbbb";
    char    c = 'a';

    printf("%s\n", strrchr (str, c));
    printf("%s", ft_strrchr (str, c));   
}*/
