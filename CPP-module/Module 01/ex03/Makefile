NAME = Human
CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
MAIN = main.cpp
SOURCE = HumanB.cpp HumanA.cpp Weapon.cpp
HEADER = Weapon.hpp HumanA.hpp HumanA.hpp

OBJECT = $(SOURCE:.cpp=.o)

$(NAME): $(MAIN) $(OBJECT)
		$(CXX) $(CFLAGS) $(MAIN) -o $(NAME) $(OBJECT)
  
$(OBJECT): $(SOURCE) $(HEADER)
		$(CXX) $(CFLAGS) -c $(SOURCE)

all : $(NAME)
clean:
	rm -rf $(OBJECT)
fclean:
	rm -rf $(OBJECT) $(NAME)
re:	fclean all

.PHONY: all clean fclean re
