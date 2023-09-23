CC = cc

AR = ar rcs

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

HEADER = ./includes/

PRE = srcs/

SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJ = $(SRC:.c=.o)

SRCS = ${addprefix ${PRE}, ${SRC}}

OBJS = ${SRCS:.c=.o}

NAME = libft.a


all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c -I $(HEADER) $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean ${NAME}

