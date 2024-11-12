CFLAGS = -Wall -Wextra -Werror
CC = cc
AR = ar
ARFLAG = -rcs

LIBC =	ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_tolower.c \
		ft_toupper.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c \
		ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c ft_strdup.c ft_calloc.c ft_atoi.c 

ADDITIONAL =	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c \
				ft_substr.c ft_strtrim.c ft_striteri.c ft_strmapi.c ft_strjoin.c ft_split.c 

BONUSES = 	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstmap_bonus.c \
			ft_lstiter_bonus.c

INC = libft.h

SRCS = $(LIBC) $(ADDITIONAL)

BSRCS = $(LIBC) $(ADDITIONAL) $(BONUSES)

OBJDIR = Obj

OBJS = $(SRCS:%.c=$(OBJDIR)/%.o)

BOBJS = $(BSRCS:%.c=$(OBJDIR)/%.o)

NAME = libft.a

all: $(NAME)

$(NAME) : $(OBJS) 
	$(AR) $(ARFLAG) $@ $?

bonus: $(BOBJS) 
	$(AR) $(ARFLAG) $(NAME) $?

$(OBJDIR)/%.o: %.c $(INC) | $(OBJDIR)
	$(CC) -c $(CFLAGS) $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all bonus