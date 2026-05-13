# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/12 20:03:15 by clouden           #+#    #+#              #
#    Updated: 2026/05/13 13:17:57 by clouden          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME		=	replace

SRC			=	main.cpp\
				replace.cpp

OBJ			=	$(SRC:%.cpp=%.o)
INCL		=	replace.hpp

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "Created $(NAME)!"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Making objects files..."

clean:
	@rm -f $(OBJ)
	@echo "Cleaning up objects..."

fclean:
	@rm -f $(NAME)
	@echo "Everything is clean"

re: fclean all

.PHONY: all clean fclean re
