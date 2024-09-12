NAME = replace
CC = c++
CFLAGS = #-Wall -Wextra -Werror -std=c++98
SRC = main.cpp
OBJ_F = ./obj
OBJ = $(SRC:%.cpp=$(OBJ_F)/%.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ_F)/%.o: %.cpp
	mkdir -p $(OBJ_F)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(OBJ_F)

fclean: clean
	$(RM) $(NAME) *.replace

re: fclean all

.PHONY: all clean fclean re