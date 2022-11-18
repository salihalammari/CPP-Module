NAME = Zombies
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
MAIN = main.cpp
SOURCE = Zombie.cpp ZombieHorde.cpp
HEADER = Zombie.hpp
OBJECT = $(SOURCE:.cpp=.o)

$(NAME): $(MAIN) $(OBJECT)
  $(CC) $(NAME) $(CFLAGS) -O $(NAME) $(OBJECT)
  
$(OBJECT): $(SOURCE) $(HEADER)
  $(CC) $(CFLAGS) -c $(SOURCE)

all : $(NAME)
clean:
	rm -rf $(OBJECT)
fclean:
	rm -rf $(OBJECT) $(NAME)
re:	fclean all

.PHONY: all clean fclean re
