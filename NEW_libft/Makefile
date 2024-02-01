CC = cc

AR = ar rcs

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c99

INCLUDE = .

SRCS = 	ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_memcpy.c\
		ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlcat.c ft_strlen.c\
		ft_strnstr.c ft_tolower.c ft_bzero.c ft_isalnum.c ft_isascii.c\
		ft_isprint.c ft_memchr.c ft_memcpy.c ft_memset.c ft_strdup.c\
		ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_toupper.c ft_substr.c\
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_putchar_fd.c\
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c\
		ft_striteri.c


OBJS = ${SRCS:.c=.o}

BONUS_SRCS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c\
			ft_lstiter.c ft_lstmap.c

BONUS_OBJS = ${BONUS_SRCS:.c=.o}

NAME = libft.a

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c -I $(INCLUDE) $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

bonus:		$(OBJS) $(BONUS_OBJS)
			${AR} $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}

.phony: all clean fclean re bonus
