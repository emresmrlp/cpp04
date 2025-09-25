#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysumeral < ysumeral@student.42istanbul.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/07 19:33:04 by ysumeral          #+#    #+#              #
#    Updated: 2025/09/25 14:25:47 by ysumeral         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		Brain.cpp
WRONGSRC =	WrongAnimal.cpp \
			WrongCat.cpp \
			wrongMain.cpp \
			Brain.cpp
OBJ = $(SRC:.cpp=.o)
WRONGOBJ = $(WRONGSRC:.cpp=.o)
NAME = animalSounds
WRONGNAME= wrongAnimalSounds

all: $(NAME)

$(NAME): $(OBJ) $(WRONGOBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(WRONGNAME) $(WRONGOBJ)

clean:
	rm -f $(OBJ)
	rm -f $(WRONGOBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(WRONGNAME)

re: fclean all

.PHONY = all clean fclean re