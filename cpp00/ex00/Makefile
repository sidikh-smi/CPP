# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 19:29:20 by skhaliff          #+#    #+#              #
#    Updated: 2023/04/28 14:13:35 by skhaliff         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRCS = megaphone.cpp

CC = c++
RM = rm -rf
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

fclean :
	$(RM) $(NAME)
re : fclean all