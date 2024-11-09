CFLAGS = -Wall -Wextra -Werror
CC = cc
AR = ar -rcs

LIBC =	ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_tolower.c \
		ft_toupper.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c \
		ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c ft_strdup.c ft_calloc.c ft_atoi.c \

ADDITIONAL =	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c \
				ft_substr.c ft_strtrim.c ft_striteri.c ft_strmapi.c ft_strjoin.c\

INC = libft.h

SRCS = $(LIBC) $(ADDITIONAL)

OBJDIR = Obj

OBJS = $(SRCS:%.c=$(OBJDIR)/%.o)

NAME = libft.a

all: $(NAME)

$(NAME) : $(OBJS) 
	$(AR) $@ $?

$(OBJDIR)/%.o: %.c $(INC) | $(OBJDIR)
	$(CC) -c $(CFLAGS) $< -o $@ -I $(INC) 

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
