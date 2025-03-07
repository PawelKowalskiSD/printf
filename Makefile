NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCES = ft_printf.c ft_check_and_handle_char.c ft_check_and_handle_pointer.c ft_check_and_handle_lower_hex.c ft_check_and_handle_int_and_digit.c \
			ft_check_and_handle_string.c ft_check_and_handle_unsigned_int.c ft_check_and_handle_upper_hex.c ft_check_format.c ft_point_print.c \
			ft_put_unsigned_int.c ft_putchar.c ft_puthex_lower.c ft_puthex_upper.c ft_putnbr.c ft_putstr.c
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		ar rcs $(NAME) $(OBJECTS)

%.o: %.c libftprintf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all