##
## ETNA PROJECT, 02/11/2019 by abdelr_o
## libmy
## File description:
##      Makefile
##

CC       = gcc
NAME	 = libmy.a
SRC      = ./lib/my/my_putchar.c \
		   ./lib/my/my_putstr.c  \
           ./lib/my/my_strlen.c  \
           ./lib/my/my_getnbr.c  \
           ./lib/my/my_putnbr.c  \
           ./lib/my/my_isneg.c   \
           ./lib/my/my_swap.c    \
           ./lib/my/my_strcpy.c  \
           ./lib/my/my_strncpy.c \
           ./lib/my/my_strcmp.c  \
           ./lib/my/my_strncmp.c \
           ./lib/my/my_strcat.c  \
           ./lib/my/my_strncat.c \
           ./lib/my/my_strstr.c  \
           ./lib/my/my_strdup.c  \
		   ./lib/my/parse.c      \
           ./lib/my/conditions.c

OBJ      = $(SRC:%.c=%.o)
MAKE     = ar
IDX      = ranlib
CRD      = ./src/my_crd.c
EXC      = my_crd
RM       = rm -f

$(NAME):	$(OBJ)
			$(MAKE) r $(NAME) $(OBJ)
			$(IDX) $(NAME)
			$(CC) $(CRD) -g3 -Wall -Wextra -Werror -std=c11 -o $(EXC) -L. $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJ)

fclean:			clean
			$(RM) $(EXC)

re:			fclean all
