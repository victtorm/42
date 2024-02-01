/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:47:39 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/31 13:15:52 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len(char const *str, char c)
{
	size_t	wc;

	wc = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str && *str != c)
			wc++;
		while (*str && *str != c)
			str++;
	}
	return (wc);
}

static char	**clean(char **str, int i)
{
	while (i >= 0)
		free (str[i--]);
	free (str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		n[3];

	str = (char **)malloc((len(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	n[I] = 0;
	n[WORD_I] = 0;
	while (s[n[I]] != '\0')
	{
		if (s[n[I]] != c)
		{
			n[START] = n[I];
			while (s[n[I]] && s[n[I]] != c)
				n[I]++;
			str[n[WORD_I]] = ft_substr(s, n[START], (n[I] - n[START]));
			if (!str[n[WORD_I]])
				return (clean(str, n[WORD_I]));
			n[WORD_I]++;
		}
		else
			n[I]++;
	}
	str[n[WORD_I]] = NULL;
	return (str);
}
