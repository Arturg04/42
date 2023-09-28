CC = cc

AR = ar rcs

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c99

INCLUDE = .

SRCS = ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_strlen.c

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
