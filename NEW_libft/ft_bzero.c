/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:17:44 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/09 17:30:47 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*a;

	a = (char *)s;
	while (n > 0)
	{
		*a = 0;
		n--;
		a++;
	}
}
/*
#include<stdio.h>

int main()
{
    char    str[] = "festa surpresa do Marcelo";

    printf("%s\n", (char *) bzero((void*)str, 20*sizeof(char)));
    printf("%s", (char *) ft_bzero(void*)str, 20*sizeof(char));
}*/
