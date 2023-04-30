##
## EPITECH PROJECT, 2022
## delivery
## File description:
## Makefile
##

SRC	=	my_char_isalpha.c \
		my_char_isnum.c \
		my_print_one.c \
		my_print_two.c \
		my_printf.c \
		my_put_double.c \
		my_put_float.c \
		my_put_nbr.c \
		my_put_pointer.c \
		my_put_sci.c \
		my_put_unsignedint.c \
		my_putchar.c \
		my_putnbr_base_unsignedint.c \
		my_putnbr_base.c \
		my_putstr_special.c \
		my_putstr.c \
		my_strlen.c \
		padding_space.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	make clean

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
