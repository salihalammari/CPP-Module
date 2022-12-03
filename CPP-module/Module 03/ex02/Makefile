NAME = Fragtrap
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp ClapTrap.cpp ScavTrap.cpp Fragtrap.cpp

OBJT = $(SRCS:.cpp=.o)

$(NAME): $(MAIN) $(OBJT)
	$(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME) $(OBJT)
$(OBJT): $(SRCS)
	$(CXX) $(CXXFLAGS) -c $(SRCS)

all : $(NAME)

clean:
	$(RM) $(OBJT)
fclean:
	$(RM) $(OBJT) $(NAME)
re:	fclean all

.PHONY: all fclean clean re