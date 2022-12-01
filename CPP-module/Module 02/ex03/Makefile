# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slammari <slammari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 05:07:30 by slammari          #+#    #+#              #
#    Updated: 2022/11/30 20:28:05 by slammari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = BSP

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
SRCS = main.cpp Fixed.cpp bsp.cpp point.cpp

OBJT = $(SRCS:.cpp=.o)

$(NAME): $(MAIN) $(OBJT)
	$(CXX) $(MAIN) $(CXXFLAGS) -o $(NAME) $(OBJT)
$(OBJT): $(SRCS)
	$(CXX) $(CXXFLAGS) -c $(SRCS)

all : $(NAME)
clean:
	$(RM) $(NAME)
fclean:
	$(RM) $(OBJT) $(NAME)
re:	clean all

.PHONY: all fclean clean re
