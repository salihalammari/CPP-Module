NAME = brain
CC = clang++
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
MAIN = main.cpp

$(NAME):$(CPPOBJ)
	$(CC) $(CPPFLAGS) $(CPPOBJ) -o $(NAME)



clean:
	rm -rf $(CPPOBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)
