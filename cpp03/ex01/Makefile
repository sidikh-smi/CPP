# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/18 19:21:27 by skhaliff          #+#    #+#              #
#    Updated: 2023/05/22 23:15:25 by skhaliff         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp
HEADERS = ScavTrap.hpp ClapTrap.hpp

CC = c++
RM = rm -rf
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

fclean :
	$(RM) $(NAME)
re : fclean all