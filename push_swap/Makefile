PUSH_FILES = push_swap.c list_func.c moves.c
OBJS = ${PUSH_FILES:.c=.o}
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -g
NAME = push_swap
LIBFTA = ./libft/libft.a
LIBFTD = ./libft

all:		${NAME}

${NAME}:	${OBJS} ${LIBFTA}
			${CC} ${CFLAGS} main.c $(OBJS) ${LIBFTA} -o ${NAME}

${LIBFTA}:	$(LIBFTD)
		make -C $(LIBFTD)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}

.phony: all clean fclean re bonus
