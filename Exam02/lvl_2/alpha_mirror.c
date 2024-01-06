/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha.mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:03:24 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/20 11:17:56 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = (122 - str[i]) + 97;
 		if (str[i] >= 65 && str[i] <= 90)
			str[i] = (90 - str[i]) + 65;
		write (1, &str[i], 1);
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[argc - 1]);
	write (1, "\n", 1);
	return (0);
}
