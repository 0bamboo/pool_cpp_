# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/20 17:22:59 by abdait-m          #+#    #+#              #
#    Updated: 2021/10/20 18:25:03 by abdait-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = Contact_.cpp tools.cpp _main_.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = ./headers/_phonebook_.hpp ./headers/Contact_.hpp

CPP = g++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
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