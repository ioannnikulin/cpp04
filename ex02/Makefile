CPP = c++
COMPILE_FLAGS = -Wall -Wextra -Werror -pedantic -Wshadow -std=c++98 -g -O0
LINK_FLAGS =
NAME = Abstract

SRCS = \
	main.cpp \
	Animal.cpp \
	Cat.cpp \
	Dog.cpp \
	Brain.cpp

OBJS = $(SRCS:.cpp=.o)

$(OBJS): %.o: %.cpp
	$(CPP) $(COMPILE_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CPP) $(LINK_FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

.PHONY: all clean fclean re