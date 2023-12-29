NAME = push_swap

LIBFT = libft
LIBFTM = libft/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

CFILES = push_swap.c \
			functions.c \
			sort_func.c \
			sort.c \
			rules_a.c \
			rules_b.c


OBJS = $(CFILES:.c=.o)

$(NAME): $(OBJS)
		@ make -C $(LIBFT)
		@ $(CC) $(CFLAGS) $(OBJS) $(LIBFTM) -o $(NAME)
		@ echo "Push_swap is ready!"

all: $(NAME)
		@ echo "All files compiled successfully!"

clean:
		@ rm -f $(OBJS)
		@ make clean -C $(LIBFT)
		@ echo "Objects files deleted!"

fclean: clean
		@ make fclean -C $(LIBFT)
		@ rm -rf $(NAME)
		@ echo "Archive file deleted!"

re: fclean all

.PHONY: all clean fclean re