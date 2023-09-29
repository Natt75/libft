NAME = libft.a
FLAGS = -Wall -Wextra -Werror
CC = gcc
CLEAN = rm -Rf
HEADER = libft.h
SRC = 	\
		ft_isalpha.c \
		ft_isditig.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strncmp.c \
		ft_strlen.c \
		ft_atoi.c \
		ft_strlcat \
		ft_strlcpy \

OBJ := $(SRC:.c=.o) #los convierte en punto O a todas los de adentro de SRC

all: $(NAME) #para ejecutar todo lo que va despues de ALL

$(NAME): %.o $(HEADER)
	@ar rcs $(NAME) $(OBJ)


%.o : 
	$(CC)$(FLAGS) -c $(SRC)

clean :
	$(CLEAN) ./*.o

Fclean : clean
	$(CLEAN) ./*.a

re : fclean all
.PHONY: all clean fclean re