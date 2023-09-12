# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 19:44:09 by aramon            #+#    #+#              #
#    Updated: 2023/09/12 20:21:25 by aramon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS = 	src/main.c \
		src/init.c \
		src/philo.c \
		src/utils.c \
		src/libft.c

$(NAME) :
	@gcc $(FLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

clean :
	@$(RM) $(NAME)

re : clean all
