# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/08 13:38:31 by clouden           #+#    #+#              #
#    Updated: 2026/05/08 14:07:30 by clouden          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME		=	brain

SRCS		=	main.cpp
OBJS		=	$(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "Created $(NAME)!"

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Making objects for $(NAME)..."

clean:
	@rm -f $(OBJS)
	@echo "Removing objects for $(NAME)..."

fclean: clean
	@rm -f $(NAME)
	@echo "Removing binary for $(NAME)!"

re: fclean all

.PHONY: all clean fclean re
