# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melshafi <melshafi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/21 14:46:33 by melshafi          #+#    #+#              #
#    Updated: 2024/11/08 14:05:50 by melshafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

SRCS = ./main.cpp\
		./AMateria.cpp\
		./Character.cpp\
		./Cure.cpp\
		./Ice.cpp\
		./MateriaSource.cpp
OBJS = $(SRCS:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror -g
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
