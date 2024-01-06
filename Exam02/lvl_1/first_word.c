/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:13:20 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/22 13:28:28 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	first_word(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		while ((str[i] == ' '  || str[i] == '\t') && str[i] != '\0')
			i++;
		while ((str[i] != ' ' || str[i] != '\t') && str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
			if ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
				return ;
		}
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[argc -1]);
	write(1, "\n", 1);
	return (0);
}
