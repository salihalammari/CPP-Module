NAME = scavtrap
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp ClapTrap.cpp ScavTrap.cpp

OBJT = $(SRCS:.cpp=.o)

$(NAME): $(MAIN) $(OBJT)
	$(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME) $(OBJT)
$(OBJT): $(SRCS)
	$(CXX) $(CXXFLAGS) -c $(SRCS)

all : $(NAME)
clean:
	$(RM) $(NAME)
fclean:
	$(RM) $(OBJT) $(NAME) replace
re:	clean all

.PHONY: all fclean clean re