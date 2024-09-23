# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 16:49:33 by irozhkov          #+#    #+#              #
#    Updated: 2024/08/26 14:53:08 by irozhkov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interface

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp Inventory.cpp main.cpp MateriaSource.cpp
OBJ = $(SRC:.cpp=.o)
DEPS = AMateria.hpp Character.hpp Cure.hpp Ice.hpp IMateriaSource.hpp Inventory.hpp MateriaSource.hpp

REMOVE = rm -f

GREEN = \033[0;32m
DEFAULT = \033[0m

all: $(NAME)

%.o: %.cpp $(DEPS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@echo "---> object files $(GREEN)CREATED$(DEFAULT)\n"
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "---> $(NAME) is $(GREEN)AVAILABLE NOW$(DEFAULT)\n"
	
clean:
	$(REMOVE) $(shell find . -name "*.o")
	@echo "---> object files $(GREEN)DELETED$(DEFAULT)\n"

fclean: clean
	$(REMOVE) $(NAME)
	@echo "---> $(NAME) $(GREEN)DELETED$(DEFAULT)\n"

re: fclean all

.PHONY: all clean fclean re
