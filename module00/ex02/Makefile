NAME = dream_job

C++ = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = tests.cpp Account.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ $(C++) $(FLAGS) $(OBJ) -o $@

%.o: %.c
	@ $(C++) $(FLAGS) -c $< -o

clean:
	@ $(RM) $(OBJ)

fclean:
	@ $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re