SRC        =    
            lib/my/my_putchar.c \
            lib/my/my_putstr.c  \
            lib/my/my_putnbr.c  \
            lib/my/my_printf.c

OBJ        =    $(SRC:.c=.o)

NAME    =    libmy.a

clean:
        rm -f $(OBJ)

fclean: clean
        rm -f $(NAME)

re: fclean all