/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 10:33:37 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/03 10:56:36 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		if ((str[i] >= 97 && str[i] <= 122) && (str[i + 1] == '\t' || str[i + 1] == ' '|| str[i + 1] == '\0'))
			str[i] -= 32;
		write (1, &str[i], 1);
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1)
		write (1, "\n", 1);
	while (i < argc)
	{
		rstr_capitalizer(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
