# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/21 14:46:33 by melshafi          #+#    #+#              #
#    Updated: 2024/10/14 12:49:14 by melshafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

SRCS = ./main.cpp\
		./ClapTrap.cpp\
		./ScavTrap.cpp\
		./FragTrap.cpp
OBJS = $(SRCS:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror
CPPVERSION = -std=c++98
COMPILER = c++

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILER) $(CPPFLAGS) $(CPPVERSION) -c $(SRCS)
	$(COMPILER) $(CPPFLAGS) $(CPPVERSION) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
