NAME = brain
CXX = c++
CXXFLAGS = -Wextra -Wall -Werror -std=c++98
MAIN = main.cpp

OBJ = $(SOURCE:.cpp=.o)

$(NAME): $(MAIN) $(CPPOBJ)
		$(CXX) $(CXXFLAGS) $(MAIN) $(OBJ) -o $(NAME)
		  
$(OBJ): $(SOURCE) $(HEADER)
		$(CXX) $(CXXFLAGS) -c $(SOURCE)

clean:
	rm -rf $(CPPOBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)
