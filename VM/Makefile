NAME = corewar
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -g
RM = rm -f
LIBFT = -L../libft -lft
SRCS = main_vm.c \
		files_to_strings.c \
		init_e.c \
		ft_print_strings.c \
		error.c \
		parsing.c \
		ft_print_hexa.c \
		op.c \
		ft_check_args.c \
		cursors.c \
		print_cursors.c \
		move_cursors.c \
		functions.c \

OBJS = $(SRCS:.c=.o)

LIBFT_PATH = ../libft

all: $(NAME)

$(NAME):$(OBJS)
	@make -C $(LIBFT_PATH)
	@$(CC) $(CFLAGS) $(SRCS) $(LIBFT) -o $(NAME)

clean:
	@rm -f $(OBJS)
	@make -C $(LIBFT_PATH) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_PATH) fclean

re:	fclean all

.PHONY: all clean fclean re
