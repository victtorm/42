/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:59:05 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/19 17:33:54 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;

	while (i < n && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

size_t	len(char *str)
{
	size_t	wc;

	wc = 0;
	while (*str)
	{
		while (*str == ' ' || *str == '\n' || *str == '\t')
			str++;
		if (*str && (*str != ' ' || *str != '\n' || *str != '\t'))
			wc++;
		while (*str && (*str != ' ' && *str != '\n' && *str != '\t'))
			str++;
	}
	return (wc);
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char **spl;

	spl = (char **)malloc(sizeof(char *) * (len(str) + 1));
	while(str[i])
		{
			while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
				i++;
			j = i;
			while (str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
				i++;
			if (i > j)
			{
			spl[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(spl[k++], &str[j], i - j);
			}
		}
		spl[k] = NULL;
		return (spl);
}


int main(int argc, char **argv)
{
	printf("%s", *ft_split(argv[argc - 1]));
}

