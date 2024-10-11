# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anarama <anarama@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/29 15:38:54 by anarama           #+#    #+#              #
#    Updated: 2024/10/11 22:50:57 by anarama          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= c++

NAME	:= materia

CFLAGS	:= -Wall -Wextra -Werror -std=c++98

OBJDIR	:= obj

HEADERS	:=	AMateria.hpp \
			ICharacter.hpp \
			Cure.hpp \
			Ice.hpp \
			ICharacter.hpp \
			MateriaSource.hpp

SRC		:=	main.cpp \
			AMateria.cpp \
			ICharacter.cpp \
			Cure.cpp \
			Ice.cpp \
			ICharacter.cpp \
			MateriaSource.cpp

OBJ		:= $(SRC:%.cpp=$(OBJDIR)/%.o)

$(shell mkdir -p $(OBJDIR))

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re: fclean all

$(OBJDIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY	: all clean fclean re