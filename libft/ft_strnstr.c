/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:58:11 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/14 14:00:41 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;
	char	*s;

	s = (char *)big;
	j = 0;
	while (little[j])
		j++;
	if (j == 0)
		return (s);
	while (*s && n > 0 && j <= n)
	{
		i = 0;
		while (little[i] == s[i] && little[i])
			i++;
		if (!little[i])
			return (s);
		n--;
		s++;
	}
	return ((char *)0);
}
/*
int main()
{
	char	str[] = "555test555";
	char	set[] = "t";

	printf("%s", ft_strnstr(str, set, 4));
}*/