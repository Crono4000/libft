
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
NAME = libft.a

CFILES = ft_atoi.c ft_ischr.c ft_string.c memory.c
OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

teste: re
	cc $(CFLAGS) main.c -L. -lft
