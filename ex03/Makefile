NAME = attack
CC = c++
CFLAGS = -Wall -Wextra -Werror
SRC = HumanA.cpp main.cpp Weapon.cpp HumanB.cpp
OBJ_F = ./obj
OBJ = $(SRC:%.cpp=$(OBJ_F)/%.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_F)/%.o: %.cpp
	mkdir -p $(OBJ_F)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(OBJ_F)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re