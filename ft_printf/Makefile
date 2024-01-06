CC = cc

AR = ar rcs

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c99

INCLUDE = .

SRCS = 	ft_printf.c ft_print_hex.c ft_print_nbr.c ft_print_ptr.c ft_print_str.c\
		ft_print_unsigned.c ft_unsigned_itoa.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_itoa.c ft_strdup.c ft_strlen.c


OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c -I $(INCLUDE) $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}

.phony: all clean fclean re bonus
