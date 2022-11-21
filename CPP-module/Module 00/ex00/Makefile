NAME = megaphone

CXXFILES = megaphone.cpp 

CXXOBJ = $(CXXFILES:%.cpp=%.o)

CXX = c++

CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

$(NAME):$(CXXOBJ)
	$(CXX) $(CXXFLAGS) $(CXXOBJ) -o $(NAME)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(CXXOBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)
