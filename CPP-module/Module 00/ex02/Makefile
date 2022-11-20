NAME = account
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
SOURCE = Account.cpp tests.cpp
HEADER = Account.hpp
CXXOBJ = $(SOURCE:.cpp=.o)

$(NAME): $(CXXOBJ)
	$(CC) $(CXXFLAGS) $(CXXOBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(CXXOBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)