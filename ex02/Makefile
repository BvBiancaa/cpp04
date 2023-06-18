# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bianca <bianca@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/25 19:50:58 by bmuni             #+#    #+#              #
#    Updated: 2023/04/08 18:34:48 by bianca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Abstract

all: $(NAME)

$(NAME):
	c++ -g -Wall -Wextra -Werror -std=c++98 main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: clean $(NAME)

.PHONY: all, clean, fclean, re
