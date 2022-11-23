NAME = Zombie

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
MAIN = main.cpp
RM = rm -f
SRCS = 	Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp\

HEADER = Zombie.hpp

OBJT = $(SRCS:.cpp=.o)

$(NAME): $(MAIN) $(OBJT)
	$(CXX) $(CXXFLAGS) $(MAIN) -o $(NAME) $(OBJT) 

$(OBJT): $(SRCS) $(HEADER)
	$(CXX) $(CXXFLAGS) -c $(SRCS)

all : $(NAME)
clean:
	$(RM) $(OBJT)
fclean:
	$(RM) $(OBJT) $(NAME)

re:	clean all

.PHONY: all fclean clean re
