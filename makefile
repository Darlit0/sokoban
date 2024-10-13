NAME = sokoban

SRCS = main.c \
       moves.c \
       final.c \
       display.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
