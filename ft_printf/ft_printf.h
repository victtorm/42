/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:34:10 by vbritto-          #+#    #+#             */
/*   Updated: 2023/10/31 13:02:38 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>

int				ft_printf(const char *str, ...);
int				ft_print_str(char *str);
int				ft_print_ptr(unsigned long long ptr);
int				ft_print_nbr(int num);
int				ft_print_unsigned(unsigned int num);
int				ft_print_hex(unsigned int num, const char conversion);
void			ft_putstr_fd(char *s, int fd);
void			ft_putchar_fd(char c, int fd);
char			*ft_unsigned_itoa(unsigned int num);
char			*ft_itoa(int n);
char			*ft_strdup(char *src);
int				ft_strlen(const char *src);

#endif
