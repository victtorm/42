/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 13:46:44 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/23 14:03:51 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rotone(char *str)
{
	int i = 0;
	char a;

	while (str[i] != '\0')
	{
		if (str[i] == 90 || str[i] == 122)
		{
			a = str[i] - 25;
			write (1, &a, 1);
		}
		else if ((str[i] >= 65 && str[i] < 90) || (str[i] >= 97 && str[i] < 122))
		{
			a = str[i] + 1;
			write (1, &a, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[argc - 1]);
	write(1, "\n", 1);
	return (0);
}
