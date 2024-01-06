/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:36:44 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/22 13:02:46 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void rev_wstr(char *str)
{
	int i = 0;
	int rev = 0;

	while (str[i] != '\0')
		i++;
	rev = i;
	while (rev >= 0)
	{
		if (str[rev] == ' ')
			{
				i = rev + 1;
				while (str[i] != '\0' && str[i] != ' ')
				{
					write (1, &str[i], 1);
					i++;
				}
				write(1, " ", 1);
			}
		if (rev == 0)
		{
			i = rev;
			while (str[i] != ' ' && str[i] != '\0')
			{
				write(1, &str[i], 1);
				i++;
			}
		}
		rev--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[argc -1]);
	write(1, "\n", 1);
	return (0);
}
