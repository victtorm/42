/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:26:25 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/20 14:15:18 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	rostring(char *str)
{
	int	i = 0;
	int j = 0;
	int k = 0;

	while ((str[i] != '\0') && ((str[i] == ' ') || (str[i] == '\t')))
		i++;
	k = i;
	while ((str[i] != '\0') && (str[i] != ' ') && (str[i] != '\t'))
		i++;
	j = i;
	if (str[i] == '\0')
	{
		while ((str[k] != '\0') && (k < j))
		{
			write (1, &str[k], 1);
			k++;
		}
		return ;
	}
	while (str[i] == ' ' || str[i] == '\t')
			i++;
	while (str[i] != '\0')
	{
		while ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] == ' ' || str[i + 1] == '\t'))
			i++;
		if ((str[i + 1] == '\0') && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if ((str[i] != '\0'))
			write (1, &str[i], 1);
		if (str[i] == '\0')
		{
			write (1, " ", 1);
			i--;
		}
		i++;
	}
	if (str[i - 1] != ' ')
		write (1, " ", 1);
	while ((str[k] != '\0') && (k < j))
	{
		if ((str[k] != ' ') && (str[k] != '\t'))
			write (1, &str[k], 1);
		k++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		rostring(argv[1]);
	}
	write(1, "\n", 1);
}
