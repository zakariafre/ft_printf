NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs
RM = rm -f

SRC =	ft_printf.c \
		ft_print_char.c \
		ft_print_str.c \
		ft_print_int.c \
		ft_print_unsigned.c \
		ft_print_hex.c \
		ft_print_uphex.c \
		ft_print_add.c 

OBJ = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@$(AR) $(NAME) $(OBJ)

%.o : %.c ft_printf.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean : 
	@$(RM) $(OBJ)

fclean : clean
	@$(RM) $(NAME)

test : $(OBJ) $(NAME) main.c
	@$(CC) $(CFLAGS) main.c $(NAME) -o main && ./main

re : fclean all