# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 14:43:31 by abdait-m          #+#    #+#              #
#    Updated: 2021/10/31 14:48:34 by abdait-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRCS = ./main.cpp ./Zombie.cpp ./randomChump.cpp ./newZombie.cpp

OBJS = $(SRCS:.cpp=.o)

HDR = Zombie.hpp

CPP = g++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(HDR)
	@$(CPP) $(OBJS) -o $@

%.o: %.cpp
	@$(CPP) $(CPPFLAGS) -o $@ -c $<
	@echo "\n\033[35mExecutable file has been created .\033[0m\n"

clean:
	@rm -f $(OBJS)
	@echo "\n\033[31mObjects removed!\033[0m\n"

fclean: clean
	@rm -f $(NAME)

re: fclean all