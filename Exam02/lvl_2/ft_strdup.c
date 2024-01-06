/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 10:02:15 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/03 10:10:45 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i = 0;
	int len = 0;
	char *s;

	while (src[len] != '\0')
		len++;
	s = malloc(sizeof(char *) * (len + 1));
	if (!s)
		return (NULL);
	while (src[i] != '\0')
	{
		s[i] = src [i];
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	printf("%s", ft_strdup(argv[argc - 1]));
	return (0);
}*/
