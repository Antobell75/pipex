CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_bzero.c      \
	ft_isalpha.c      \
	ft_isdigit.c      \
	ft_memset.c       \
	ft_strlen.c       \
	ft_toupper.c      \
	ft_isalnum.c      \
	ft_isascii.c      \
	ft_isprint.c      \
	ft_tolower.c      \
	ft_atoi.c         \
	ft_strdup.c       \
	ft_calloc.c       \
	ft_strnstr.c      \
	ft_strncmp.c      \
	ft_strchr.c       \
	ft_memchr.c       \
	ft_memcmp.c       \
	ft_strlcpy.c      \
	ft_memcpy.c       \
	ft_strrchr.c      \
	ft_memmove.c      \
	ft_strlcat.c      \
	ft_strjoin.c      \
	ft_substr.c       \
	ft_putnbr_fd.c    \
	ft_strmapi.c      \
	ft_split.c        \
	ft_putstr_fd.c    \
	ft_putchar_fd.c   \
	ft_itoa.c         \
	ft_putendl_fd.c   \
	ft_striteri.c     \
	ft_strtrim.c      

SRC_BONUS = ft_lstnew_bonus.c \
	ft_lstsize_bonus.c		  \
	ft_lstlast_bonus.c        \
	ft_lstadd_back_bonus.c    \
	ft_lstdelone_bonus.c      \
	ft_lstclear_bonus.c       \
	ft_lstiter_bonus.c	      \
	ft_lstadd_front_bonus.c   \
	ft_lstmap_bonus.c         \

INCLUDES = .
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:_bonus.c=_bonus.o)
NAME = libft.a

all : $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) -o $@ -c $< -I $(INCLUDES)

%_bonus.o : %_bonus.c
	@$(CC) $(CFLAGS) -o $@ -c $< -I $(INCLUDES)

$(NAME) : $(OBJ)
	@echo "Creation de la librairie"
	@ar rcs $(NAME) $(OBJ)

# Command #

bonus : $(OBJ) $(OBJ_BONUS)
	@echo "Creation de la librairie + Bonus"
	@ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

clean :
	@echo "Supression des objets"
	@rm -f $(OBJ) $(OBJ_BONUS)

fclean : clean
	@echo "et Supression de la librairie"
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus
