CC = cc

AR = ar rcs

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

INCLUDE = include/

LIB = Libft/libft.a

SRCS =Libft/*.c src/*.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

all:		${NAME}

.c.o:
			${CC} ${LIB} ${CFLAGS} ${SRCS} -c -I $(INCLUDE) $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean ${NAME}

.phony: all clean fclean re bonus
