CC = cc

AR = ar rcs

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c99

INCLUDE = .

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

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

.phony: clean fclean
