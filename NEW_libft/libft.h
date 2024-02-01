/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:37:51 by vbritto-          #+#    #+#             */
/*   Updated: 2024/01/31 14:08:56 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <fcntl.h>

/*--------------------ENUM---------------------*/

enum e_ref
{
	I,
	WORD_I,
	START,
};

/*-------------------LIST----------------------*/

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_front(t_list **lst,
					t_list *new);
int				ft_lstsize(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

/*------------------CHARS----------------------*/

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);

/*------------------STRING---------------------*/

char			*ft_strchr(const char *str, int c);
char			*ft_strdup(char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
size_t			ft_strlen(const char *src);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t n);
char			*ft_strrchr(const char *str, int c);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_substr(char const *s, unsigned int start, size_t len);

/*-------------------MEMORY---------------------*/

void			ft_bzero(void *s, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *str, int c, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);

/*----------------FILE DESCRIPTORS----------------*/

void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);

/*-----------------NUMBERS------------------------*/

char			*ft_unsigned_itoa(unsigned int num);
char			*ft_itoa(int n);
int				ft_atoi(const char *str);
long			ft_atol(const char *str);

/*---------------------CALC------------------------*/

int				ft_sqrt(int nb);
int				ft_power(int nb, int power);
int				ft_is_prime(int nb);
int				ft_find_next_prime(int nb);
int				ft_fibonacci(int index);
int				ft_recursive_factorial(int nb);

/*--------------------FT_PRINTF-------------------*/

int				ft_printf(const char *str, ...);
int				ft_print_str(char *str);
int				ft_print_ptr(unsigned long long ptr);
int				ft_print_nbr(int num);
int				ft_print_unsigned(unsigned int num);
int				ft_print_hex(unsigned int num, const char conversion);

/*---------------------GET_NEXT_LINE-----------------*/

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000000
# endif

char	*get_next_line(int fd);


#endif
