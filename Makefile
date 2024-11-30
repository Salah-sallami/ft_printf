
SRC = ft_putchar.c ft_printf.c ft_putnbr.c ft_putstr.c \
	ft_conversions.c ft_hex_uppercase.c ft_putnbr_u.c \
	ft_hex_lowercase.c ft_hex_p.c

OBJS = ${SRC:.c=.o}

NAME = libftprintf.a

LIBC = ar rcs

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -r

all: ${NAME}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}


%.o: %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all