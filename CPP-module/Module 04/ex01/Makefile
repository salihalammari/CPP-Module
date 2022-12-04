
NAME = brain
CXX= c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp Animal.cpp WrongAnimal.cpp Dog.cpp Cat.cpp WrongCat.cpp Brain.cpp

OBJT = $(SRCS:.cpp=.o)

$(NAME): $(OBJT)
	$(CXX) $(CXXFLAGS) $(OBJT) -o $(NAME)

$(OBJT): $(SRCS)
	$(CXX) $(CXXFLAGS) -c $(SRCS)

all : $(NAME)

clean:
	$(RM) $(OBJT)
fclean: clean
	$(RM) $(NAME)
re:	fclean all

.PHONY: all fclean clean re
