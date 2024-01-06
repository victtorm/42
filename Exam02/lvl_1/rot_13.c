/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:21:49 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/20 15:52:01 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot13(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		if (((str[i] >= 65 && str[i] <= 76)) || ((str[i] >= 97 && str[i] <= 109)))
			str[i] += 13;
		else if (((str[i] >= 77 && str[i] <= 90)) || ((str[i] >= 110 && str[i] <= 122)))
			str[i] -= 13;
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot13(argv[argc - 1]);
	write(1, "\n", 1);
	return (0);
}
