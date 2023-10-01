CC = cc

AR = ar rcs

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c99

INCLUDE = ./include

SRC = ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_memccpy.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlcat.c ft_strlen.c ft_strnstr.c ft_tolower.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memset.c ft_strdup.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_toupper.c

SRCS = ${addprefix ./srcs/, ${SRC}}

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
