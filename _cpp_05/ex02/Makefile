# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 20:54:13 by abdait-m          #+#    #+#              #
#    Updated: 2021/12/06 11:50:44 by abdait-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Forms

SRCS = Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequiestForm.cpp ShrubberyCreationForm.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

HDR = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequiestForm.hpp ShrubberyCreationForm.hpp

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