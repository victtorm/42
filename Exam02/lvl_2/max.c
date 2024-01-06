/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:33:53 by vbritto-          #+#    #+#             */
/*   Updated: 2023/12/23 14:24:17 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int * tab, unsigned int len)
{
	int i = 0;
	int j;
	int temp;

	if (len == 0)
		return (0);
	while (i <= len)
	{
		j = i + 1;
		while (j <= len)
		{
			if (tab[j] >= tab[i])
				temp = tab[j];
			j++;
		}
		i++;
	}
	return (temp);
}

int main()
{
	int tab[] = {2, 5, -8, -11, -15, -19};
	int len = 6;

	max(tab, len);
	return (0);
}
