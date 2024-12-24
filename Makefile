NAME = libftprintf.a
SRC = src/ft_printf.c src/ft_putchar.c src/ft_putstr.c src/ft_putnbr.c src/ft_putnbr_base.c src/ft_putnbr_base_m.c
FLAGS = -Wall -Wextra -Werror
OBJ_DIR = obj
OBJS = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
CC = gcc


all: ${NAME}


${NAME}: $(OBJS)
	ar rc ${NAME} $(OBJS)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	cc ${FLAGS} $< -c -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)/src

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f ${NAME}


re: fclean all
