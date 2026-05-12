# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clouden <clouden@student.42madrid.com      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/08 15:38:37 by clouden           #+#    #+#              #
#    Updated: 2026/05/12 19:35:52 by clouden          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I incl -g -O0

NAME		=	violence

SRCS		=	src/main.cpp\
				src/Weapon.cpp\
				src/HumanA.cpp\
				src/HumanB.cpp

OBJS		=	$(patsubst src/%.cpp, obj/%.o, $(SRCS))
INCL		=	incl/Weapon.hpp\
				incl/HumanA.hpp\
				incl/HumanB.hpp

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "Created $(NAME), yeaahhh!"

obj:
	@mkdir -p obj

obj/%.o: src/%.cpp $(INCL) | obj
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Creating objects for $(NAME)...be prepared."

clean:
	@rm -rf obj
	@echo "Cleaning up objects..."

fclean: clean
	@rm -f $(NAME)
	@echo "Removing $(NAME)...peace has returned."

re: fclean all

.PHONY: all clean fclean re
