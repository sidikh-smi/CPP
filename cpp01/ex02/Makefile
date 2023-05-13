# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 12:14:43 by skhaliff          #+#    #+#              #
#    Updated: 2023/05/11 12:14:44 by skhaliff         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
SRCS = main.cpp 

CC = c++
RM = rm -rf
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

fclean :
	$(RM) $(NAME)
re : fclean all