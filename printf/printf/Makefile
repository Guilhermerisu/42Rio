# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gupiment <gupiment@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 16:20:51 by gupiment          #+#    #+#              #
#    Updated: 2023/11/07 16:23:18 by gupiment         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#source files
SRC = 	ft_printf.c \
		auxiliar_functions.c \
		auxiliar_functions_more.c \

#tranform into .o
OBJ = $(SRC:.c=.o)

#header source
HEADER = ft_printf.h

#static library's name
NAME = libftprintf.a

#for compliling
FLAGS = -Wall -Wextra -Werror

#remove files
RM = rm -f

##RULES
#compile
.c.o:
			cc $(FLAGS) -c $< -o $(<:.c=.o)

#rule name - make library
$(NAME): $(OBJ) $(HEADER)
			make -C ./libft
			mv ./libft/libft.a ./$(NAME)
			ar -rcs $@ $^

#make libft.a
all: $(NAME)

#remove objects
clean:
			$(RM) $(OBJ)
#remove all
fclean: clean
			$(RM) $(NAME)
			make clean -C ./libft
#clear all
re: fclean all

.PHONY: all clean fclean re
