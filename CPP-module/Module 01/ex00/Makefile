NAME = Zombie

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
MAIN = main.cpp
RM = rm -f
SRCS = 	Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp\

HEADER = Zombie.hpp

OBJT = $(SRCS:.cpp=.o)

$(NAME): $(MAIN) $(OBJT)
	$(CC) $(MAIN) $(FLAGS) -o $(NAME) $(OBJT) 

$(OBJT): $(SRCS) $(HEADER)
	$(CC) $(FLAGS) -c $(SRCS)

all : $(NAME)
clean:
	$(RM) $(OBJT)
fclean:
	$(RM) $(OBJT) $(NAME)

re:	clean all

.PHONY: all fclean clean re
