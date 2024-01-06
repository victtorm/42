/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:02:44 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/19 11:42:55 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*search_replace(char *str, char a, char b)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
			str[i] = b;
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	char	*str;
	int i = 0;

	if ((argc == 4) && !(argv[argc - 2][1] && argv[argc - 1][1]))
	{
		str = search_replace(argv[argc - 3], argv[argc - 2][0], argv[argc - 1][0]);
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
