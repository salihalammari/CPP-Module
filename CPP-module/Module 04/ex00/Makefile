NAME = Animal
CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

HEADERS = Animal.hpp WrongAnimal.hpp Dog.hpp Cat.hpp WrongCat.hpp

SRCS =	main.cpp Animal.cpp WrongAnimal.cpp Dog.cpp Cat.cpp WrongCat.cpp

OBJT = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJT)
	$(CXX) $(CXXFLAGS) $(OBJT) -o $(NAME)

%.o: %.cpp  $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJT)
fclean: clean
	$(RM) $(NAME)
re:	fclean all

.PHONY: all fclean clean re
