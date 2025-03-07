SRCS = main.c \
	aux/ft_split.c \
	aux/ft_substr.c \
	aux/ft_calloc.c \
	aux/ft_strlen.c \
	aux/ft_strdup.c \
	aux/ft_memcpy.c \
	aux/ft_bzero.c \
	aux/ft_strlcpy.c \

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)
INCLUDES = push_swap.h

all: $(NAME)
	@echo "OK"

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "compilation completed"

aux/%.o: aux/%.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	@echo "cleaned"

fclean: clean
	rm -f $(NAME)
	@echo "fully clean"

re: fclean all

.PHONY: clean fclean all re