/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:07:51 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/23 14:24:21 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	camel_to_snake(char *str)
{
	int	i = 0;

	while (str[i] != '\0' && (str[i] >= 97 && str[i] <= 122))
	{
		write (1, &str[i], 1);
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			write(1, "_", 1);
			str[i] += 32;
			write (1, &str[i], 1);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
	return ;
}

int main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[argc -1]);
	write(1, "\n", 1);
	return (0);
}
