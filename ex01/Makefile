# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/06 22:27:44 by clouden           #+#    #+#              #
#    Updated: 2026/05/07 17:48:10 by clouden          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
NAME 		= 	moarbrainz

SRCS		=	main.cpp \
				Zombie.cpp

OBJS		= 	$(SRCS:%.cpp=%.o)

INCL		=	Zombie.hpp

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "Creating $(NAME)...."

%.o:%.cpp $(INCL)
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Creating objects for $(NAME)...."

clean:
	@rm -f $(OBJS)
	@echo "Cleaning up object files..."

fclean: clean
	@rm -f $(NAME)
	@echo "Removing $(NAME)"

re: fclean all

.PHONY: all clean fclean re



