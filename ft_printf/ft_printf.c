/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:02:34 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/31 17:23:48 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	arg_conversion(va_list args, const char conversion)
{
	int	len;

	len = 1;
	if (conversion == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (conversion == 's')
		len = ft_print_str(va_arg(args, char *));
	else if (conversion == 'p')
		len = ft_print_ptr(va_arg(args, unsigned long long));
	else if (conversion == 'd' || conversion == 'i')
		len = ft_print_nbr(va_arg(args, int));
	else if (conversion == 'u')
		len = ft_print_unsigned(va_arg(args, unsigned int));
	else if (conversion == 'x' || conversion == 'X')
		len = ft_print_hex(va_arg(args, unsigned int), conversion);
	else if (conversion == '%')
		ft_putstr_fd("%", 1);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += arg_conversion(args, str[i + 1]);
			i++;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
/*
#include <stdio.h>

int main ()
{
        int a;
        int *c;

        a = '0';
        c = &a;

        printf("%p\n", 0);
        ft_printf("%p", 0);
}


int		main ()
{
	int	count;

	count = ft_printf(0, 0);
	//count = printf(0, 0);
}
*/
