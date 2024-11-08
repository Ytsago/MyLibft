CFLAGS = -Wall -Wextra -Werror
LIBC =	ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_tolower.c \
		ft_toupper.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c \
		ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c ft_strdup.c ft_calloc.c ft_atoi.c \

ADDITIONAL = ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c \
		ft_substr.c ft_strtrim.c ft_striteri.c \

INC = libft.h

SRCS = $(LIBC) $(ADDITIONAL)

OBJS = $(SRCS:.c=.o)

NAME = libft.a

CC = cc

all: $(NAME)

$(NAME) : $(OBJS) 
	ar -rc $@ $?

%.o: %.c $(INC)
	$(CC) -c $(CFLAGS) $< -o $@ -I $(INC)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
