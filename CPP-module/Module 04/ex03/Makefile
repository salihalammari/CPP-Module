NAME = amateria
CXX = c++
RM = rm -rf
HEADERS =  AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 

SRCS =	main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

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