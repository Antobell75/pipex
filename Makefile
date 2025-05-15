CC = gcc
CFLAGS = -Wall -Werror -Wextra -g3 -O3

SRC = main.c 

OBJDIR = obj
OBJ = $(SRC:%.c=$(OBJDIR)/%.o)

NAME = fdf

PRINTF = printf/printf.a

INCLUDES = -Iincludes -Iprintf -lm

$(NAME): $(OBJ) $(PRINTF)
	@$(CC) $(CFLAGS) $(OBJ) $(PRINTF) -o $(NAME)
	@echo "Compilation de $(NAME) terminée."

$(OBJDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(PRINTF):
	@$(MAKE) -C printf

all: $(NAME)

clean:
	@echo "Suppression des fichiers objets..."
	@rm -rf $(OBJDIR)
	@$(MAKE) -C printf clean

fclean: clean
	@echo "Suppression de l'exécutable $(NAME)..."
	@rm -f $(NAME)
	@$(MAKE) -C printf fclean

re: fclean all

.PHONY: all clean fclean re