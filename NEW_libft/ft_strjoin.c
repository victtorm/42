/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:00:31 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/17 13:03:59 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	n;
	char			*str;	

	j = 0;
	n = 0;
	i = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	while (s1[n] != '\0')
		str[j++] = s1[n++];
	n = 0;
	while (s2[n] != '\0')
		str[j++] = s2[n++];
	str[j] = 0;
	return (str);
}
/*
int main(int argc, char **argv)
{
    printf("%s", ft_strjoin(argv[argc - 2], argv[argc - 1]));
}*/
