NAME = fragtrap
FLAGS = -Werror -Wall -Wextra -std=c++98
CC = c++
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

all : $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: clean all

.PHONY: all clean fclean re
