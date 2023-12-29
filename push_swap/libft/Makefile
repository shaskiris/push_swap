NAME	= libft.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

FILES	=	ft_split.c \
			ft_strdup.c \
			ft_strlen.c \
			ft_substr.c

OBJ		= $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ $(CC) $(CFLAGS) -c $(FILES)
	@ ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re