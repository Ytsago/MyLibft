CFLAGS = -Wall -Wextra -Werror
LIBC =	ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_tolower.c \
		ft_toupper.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c \
		ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c ft_strdup.c ft_calloc.c ft_atoi.c \

ADDITIONAL = ft_putchar_fd.c

SRCS = $(LIBC)

OBJS = $(SRCS:.c=.o)

NAME = libft.a

CC = gcc

all: $(NAME)

$(NAME) : $(OBJS)
	ar -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $? -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
