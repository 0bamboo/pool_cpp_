# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 14:43:31 by abdait-m          #+#    #+#              #
#    Updated: 2021/11/08 13:09:58 by abdait-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karen

SRCS = ./main.cpp ./Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

HDR = Fixed.hpp

CPP = clang++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(HDR)
	@$(CPP) $(OBJS) -o $@
	@echo "\n\033[35mExecutable file has been created .\033[0m\n"

%.o: %.cpp
	@$(CPP) $(CPPFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo "\n\033[31mObjects removed!\033[0m\n"

fclean: clean
	@rm -f $(NAME)

re: fclean all