/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 11:05:47 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/22 11:30:34 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

void snake_to_camel(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '_')
			i++;
		if (str [i - 1] == '_' && str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
			write (1, &str[i], 1);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}

	}
	return ;
}

int main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[argc -1]);
	write(1, "\n", 1);
	return (0);
}
