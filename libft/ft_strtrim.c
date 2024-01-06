/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:38:08 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/17 13:05:21 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	n;

	if (!s1 ||!set)
		return (NULL);
	i = 0;
	n = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i < n)
		i++;
	if (i == n--)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[n]) && n + 1 > 0)
		n--;
	str = malloc(n - i + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], n - i + 2);
	return (str);
}
/*
int main()
{
	char	str[] = "54test45";
	char	set[] = "54";

	printf("%s", ft_strtrim(str, set));
}*/
