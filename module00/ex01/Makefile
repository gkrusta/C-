NAME = phonebook

C++ = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = PhoneBook.cpp Contact.cpp main.cpp

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