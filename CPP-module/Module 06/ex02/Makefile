NAME = Identify_real_type
CXX = c++
RM = rm -rf

HEADERS = A.hpp B.hpp C.hpp Base.hpp 

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp A.cpp B.cpp C.cpp Base.cpp

OBJT = $(SRCS:.cpp=.o)
all : $(NAME)

$(NAME): $(OBJT)
	$(CXX) $(CXXFLAGS) $(OBJT) -o $(NAME)

%.o: %.cpp  $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJT)
fclean:
	$(RM) $(OBJT) $(NAME)
re:	fclean all

.PHONY: all fclean clean re
