NAME = zombie
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRC = newZombie.cpp randomChump.cpp Zombie.cpp main.cpp
OBJ_F = ./obj
OBJ = $(SRC:%.cpp=$(OBJ_F)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC)  $(CFLAGS) $(OBJ) -o $(NAME)  

$(OBJ_F)/%.o: %.cpp
	mkdir -p $(OBJ_F)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_F)

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re


