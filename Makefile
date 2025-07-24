# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Program name
NAME = libft.a

# Source and object files
SRCS = ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_isdigit.c \
       ft_bzero.c ft_isalpha.c ft_strrchr.c ft_atoi.c ft_memset.c ft_memchr.c \
	   ft_memcpy.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	   ft_strchr.c ft_memmove.c ft_strncmp.c ft_strjoin.c ft_memcmp.c \
	   ft_strnstr.c ft_strdup.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c \
	   ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c ft_split.c


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
