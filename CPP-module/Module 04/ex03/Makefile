NAME = amateria
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address

SRCS =	main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		@rm -rf $(OBJS)

fclean: clean
		@rm -f $(NAME)
