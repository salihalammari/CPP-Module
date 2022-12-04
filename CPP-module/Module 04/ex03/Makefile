NAME = amateria
CXX = c++
RM = rm -rf
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 

SRCS =	main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

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