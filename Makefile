NAME =  libftprintf.a
FLAGS = -Wall -Wextra -Werror
MANDATORY_PART = ft_printf.c printf_ft_putchar.c \
				printf_ft_putnbr.c printf_ft_putnbru.c printf_ft_putnbrx.c \
				printf_ft_putp.c printf_ft_putstr.c varg_len.c 

O_FILES =	*.o

.c.o:
	cc $(FLAGS) -c $^

all: $(NAME)

$(NAME): $(O_FILES)
	ar rcs $(NAME) $(O_FILES)

re: fclean all

fclean:	clean
	rm -f $(NAME)
clean:
	rm -f $(O_FILES)
