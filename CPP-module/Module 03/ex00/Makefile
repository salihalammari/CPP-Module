NAME = claptrap
CXX = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp ClapTrap.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


clean:
		rm -rf $(OBJS)

fclean: clean
		rm -f $(NAME)

re:
		$(MAKE) fclean
		$(MAKE) all