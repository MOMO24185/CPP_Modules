NAME = megaphone

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

CPPFLAGS = -Wall -Wextra -Werror
CPPVERSION = -std=c++98
COMPILER = clang++

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILER) $(CPPFLAGS) $(CPPVERSION) -c $(SRCS) -o $(OBJS)
	$(COMPILER) $(CPPFLAGS) $(CPPVERSION) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re