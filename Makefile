# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amatshiy <amatshiy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/20 08:26:40 by amatshiy          #+#    #+#              #
#    Updated: 2018/07/20 09:03:16 by amatshiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 42_Example

DL_NAME = game.so

SRC_DL = Player.cpp

SRC = main.cpp

CMP_DL = clang++ -shared -fPIC -o

CMP = clang++ 

all:
	$(CMP_DL) $(DL_NAME)  $(SRC_DL)
	$(CMP) $(SRC) -o $(NAME)

clean:
	rm -rf $(DL_NAME)

fclean: clean
	rm -rf $(NAME)

re: fclean all