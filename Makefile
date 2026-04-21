
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

CFILES = ft_atoi.c ft_isalpha.c  ft_list2.c   ft_memcmp.c   ft_memset.c    ft_strchr.c    ft_strjoin.c  ft_strlen.c   ft_strnstr.c  ft_substr.c ft_bzero.c   ft_ischr.c    ft_list.c    ft_memcpy.c   ft_putstuff.c  ft_strdup.c    ft_strlcat.c  ft_strmapi.c  ft_strrchr.c  ft_to.c ft_calloc.c ft_itoa.c ft_memchr.c  ft_memmove.c  ft_split.c ft_striteri.c  ft_strlcpy.c  ft_strncmp.c  ft_strtrim.c
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

#teste: re
#	cc $(CFLAGS) main.c -L. -lft
