# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 15:54:22 by abdait-m          #+#    #+#              #
#    Updated: 2021/11/30 22:35:23 by abdait-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Interface

SRCS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

HDR = AMateria.hpp  Character.hpp  Cure.hpp  Ice.hpp  ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp 

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