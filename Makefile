CC = gcc
CFLAGS = -Wall -Werror -Wextra -g3 -O3

SRC = srcs/pipex.c \
	srcs/pipex_utils.c

OBJDIR = obj
OBJ = $(SRC:srcs/%.c=$(OBJDIR)/%.o)

NAME = pipex

PRINTF = printf/ftprintf.a
LIBFT = libft/libft.a

INCLUDES = -Iincludes -Iftprintf -lm -Ilibft 

$(NAME): $(OBJ) $(PRINTF) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ) $(PRINTF) $(LIBFT) -o $(NAME)
	@echo "Compilation de $(NAME) terminée."

$(OBJDIR)/%.o: srcs/%.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT):
	@$(MAKE) -C libft

$(PRINTF):
	@$(MAKE) -C printf

all: $(NAME)

clean:
	@echo "Suppression des fichiers objets..."
	@rm -rf $(OBJDIR)
	@$(MAKE) -C printf clean
	@$(MAKE) -C libft clean

fclean: clean
	@echo "Suppression de l'exécutable $(NAME)..."
	@rm -f $(NAME)
	@$(MAKE) -C printf fclean
	@$(MAKE) -C libft fclean

re: fclean all

.PHONY: all clean fclean re