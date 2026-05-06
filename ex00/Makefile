# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/06 13:46:13 by clouden           #+#    #+#              #
#    Updated: 2026/05/06 18:34:57 by clouden          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME 		=	zombies
SRCS		=	main.cpp\
				Zombie.cpp


OBJS		=	$(SRCS:%.cpp=%.o)
INCLS		=	Zombie.hpp

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "Created $(NAME)!"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "Cleaned Zombies!"

fclean: clean
	@rm -f $(NAME)
	@echo "...and wiped up the blood..."

re: fclean all

.PHONY: all clean fclean re
