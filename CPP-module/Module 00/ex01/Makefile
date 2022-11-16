NAME = PhoneBook

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
SRCS =  main.cpp\
		PhoneBook.cpp\
		Contact.cpp\

OBJT = $(SRCS:.cpp=.o)

INC = PhoneBook.hpp Contact.hpp
$(NAME): $(OBJT) $(INC)
	$(CC) $(OBJT) $(FLAGS) -o $(NAME)

# $(OBJT): $(SRCS)
# 	$(CC) $(FLAGS) (SRCS) -c $(OBJT)

all : $(NAME)
clean:
	$(RM) $(OBJT)
fclean:
	$(RM) $(OBJT) $(NAME)

re:	clean all

.PHONY: all fclean clean re
