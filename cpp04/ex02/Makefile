# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/20 08:11:26 by skhaliff          #+#    #+#              #
#    Updated: 2023/06/14 23:43:32 by skhaliff         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

CC = c++
RM = rm -rf
FLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

fclean :
	$(RM) $(NAME)
re : fclean all