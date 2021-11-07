# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 14:43:31 by abdait-m          #+#    #+#              #
#    Updated: 2021/11/07 14:05:48 by abdait-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRCS = ./main.cpp 

OBJS = $(SRCS:.cpp=.o)

HDR = 

CPP = g++

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