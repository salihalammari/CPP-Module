NAME = account
CC = c++
CPPFLAGS = -Wall -Wextra -Werror
MAIN = tests.cpp
SOURCE = account.cpp 
HEADER = Account.hpp
OBJECT = $(SOURCE:.cpp=.o)

$(NAME): $(CPPOBJ)
	$(CC) $(CPPFLAGS) $(CPPOBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf $(CPPOBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)