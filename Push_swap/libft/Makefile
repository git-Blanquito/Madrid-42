# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aiblanco <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 20:00:49 by aiblanco          #+#    #+#              #
#    Updated: 2022/09/18 15:33:21 by aiblanco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
library.h = libft.h
b_functions = ft_strlcat.o ft_strlcpy.o ft_memmove.o ft_memcpy.o ft_bzero.o \
ft_memset.o ft_strlen.o ft_isprint.o ft_isascii.o ft_isascii.o ft_isalnum.o \
ft_isdigit.o ft_isalpha.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o \
ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o ft_calloc.o \
ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o \
ft_strmapi.o ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o \
ft_putnbr_fd.o
printf_functions = ft_printf.o ft_printchar.o ft_printhex.o ft_printnum.o \
ft_printptr.o ft_printstr.o ft_printunnum.o ninehex.o
getnextline_functions = get_next_line_bonus.o get_next_line_utils.o \
get_next_line.o
BONUS = ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstlast_bonus.o ft_lstsize_bonus.o \
ft_lstadd_back_bonus.o ft_lstdelone_bonus.o ft_lstclear_bonus.o ft_lstiter_bonus.o \
ft_lstmap_bonus.o

all: $(NAME)

$(NAME): $(b_functions) $(library.h) $(printf_functions) $(getnextline_function) $(BONUS)
	ar -crs $(NAME) $(b_functions) $(printf_functions) $(getnextline_function) $(BONUS)

update: $(b_functions) $(BONUS) $(library.h)
	ar -rs $(NAME) *.o

%.o: %.c
	gcc $(CFLAGS) -c $?

bonus: $(NAME) $(BONUS) $(b_functions) $(library.h)
	ar -crs $(NAME) $(BONUS)

clean:
	rm -f $(b_functions) $(printf_functions) $(getnextline_function) $(BONUS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

