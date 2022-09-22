SRCS	= srcs/do-op.c srcs/op.c srcs/atoi.c srcs/putnbr.c
OBJS	= ${SRCS:.c=.o}
NAME	= do-op

all:
	gcc -Wall -Wextra -Werror ${SRCS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all