# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dzui <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/01 15:02:50 by dzui              #+#    #+#              #
#    Updated: 2017/11/12 16:52:47 by dzui             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_gkrellm

SRC =  main.cpp IMonitorDisplay.cpp IMonitorModule.cpp HostName.cpp OsModule.cpp TimeModule.cpp CpuModule.cpp DiskModule.cpp MemoryModule.cpp NetwModule.cpp NcursesOut.cpp Window.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

INC= -I includes/sfml/2.4.2_1/include

LIB= -L includes/sfml/2.4.2_1/lib -lsfml-graphics -lsfml-window -lsfml-system -lncurses

FOO= export LD_LIBRARY_PATH=./includes/sfml/2.4.2_1/lib

$(NAME): $(OBJ)
		clang++ -g $(FLAGS) -o $(NAME) $(OBJ) $(LIB)
		@echo $(FOO)
		
%.o:%.cpp
		clang++ $(FLAGS) -c $(INC) -o $@ $<

all: $(NAME)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re:	fclean $(NAME)
