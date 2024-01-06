/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:01:49 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/19 18:38:37 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>


int	inter(char *str, char c, int len)
{
	int i = 0;

	while ((str[i]) && (i < len || len == -1))
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}



int	main(int argc, char **argv)
{
	int	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!inter(argv[1], argv[1][i], i) && inter(argv[2],argv[1][i], -1))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
