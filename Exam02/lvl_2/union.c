/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:57:39 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/19 16:10:13 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	check(int c, char *str, int index)
{
	int	i = 0;

	while (i < index)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return 1;
}

void	ft_union(char *a, char *b)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (a[i] != '\0')
		i++;
	while (b[j] != '\0')
	{
		a[i] = b [j];
		i++;
		j++;
	}
	i--;
	while (k <= i)
	{
		if (check(a[k], a, k) == 1)
			write (1, &a[k], 1);
		k++;
	}
	return;
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[argc - 2], argv[argc - 1]);
	write(1, "\n", 1);
	return (0);
}
