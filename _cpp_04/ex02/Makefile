# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 15:54:22 by abdait-m          #+#    #+#              #
#    Updated: 2021/12/01 02:11:28 by abdait-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Abstract

SRCS = Animal.cpp Cat.cpp Dog.cpp Brain.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

HDR = Animal.hpp Cat.hpp Dog.hpp Brain.hpp

CPP = clang++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(OBJS) -o $@
	@echo "\n\033[35mExecutable file has been created .\033[0m\n"

%.o: %.cpp $(HDR)
	$(CPP) $(CPPFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)
	@echo "\n\033[31mObjects removed!\033[0m\n"

fclean: clean
	@rm -f $(NAME)

re: fclean all