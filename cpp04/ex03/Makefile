# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 22:35:04 by skhaliff          #+#    #+#              #
#    Updated: 2023/06/15 18:40:40 by skhaliff         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AMateria
SRCS = AMateria.cpp  Character.cpp Cure.cpp  Ice.cpp MateriaSource.cpp main.cpp 

CC = c++
RM = rm -rf
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

fclean :
	$(RM) $(NAME)
re : fclean all