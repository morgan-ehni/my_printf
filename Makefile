##
## EPITECH PROJECT, 2020
## amelioration printf
## File description:
## Makefile
##

SRC =	conversion.c	\
		my_printf.c	\
		my_put_nbr.c	\
		my_putchar.c	\
		my_putoctalstr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_strlen.c	\

OBJ = $(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar	rc	$(NAME)	*.o

clean:
	rm	-f	$(OBJ)

fclean: clean
	rm	-f	$(NAME)

re: fclean all