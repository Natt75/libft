FLAGS = -Wall -Wextra -Werror
#esto es para ir compilando 
CC = gcc
NAME = libft.a
#Nombre del archivo 
AR = ar -rcs#para ir PRecompilando todo
CLEAN = rm -Rf

SRC = 	\ 
		ft_isalpha.c\
		ft_isditig.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_strncmp.c\
		ft_strlen.c\
		ft_atoi.c\

OBJ = $(SRCS:.c=.o) #los convierte en punto O a todas los de adentro de SRC

all: $(NAME) #para ejecutar todo lo que va despues de ALL

$(NAME): %.o
	$(AR)$(OBJ)$(NAME)


%.o = 
	$(CC)$(FLAGS) -c $(SRC)

clean =

Fclean = 

.PHONY 