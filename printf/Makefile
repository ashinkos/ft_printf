NAME=libftprintf.a
SRC = ft_putchar_fd.c \
	ft_putnbr_i_fd.c \
	ft_putnbr_u_fd.c \
	ft_putstr_fd.c \
	ft_printf.c \
	ft_putnbr_x_fd.c \
	ft_putnbr_xx_fd.c \
	ft_putadresse_fd.c 
	
CC = gcc	
FLAGS= -Wall -Werror -Wextra 	
PARA  = -c

OBJ=$(SRC:.c=.o)

OBJ_BONUS= $(SRC_BONUS:.c=.o)

%.o : %.c 
	$(CC) $(PARA) $(FLAGS) $<  -o $@ 


all: $(NAME)
	
$(NAME): $(OBJ)
	
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ) 

fclean: clean
	rm -rf $(NAME)

re: fclean all