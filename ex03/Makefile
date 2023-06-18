NAME =	Materia

all: fclean_spec $(NAME)

$(NAME):
	c++ -g main.cpp AMateria.cpp Character.cpp ICharacter.cpp Cure.cpp Ice.cpp MateriaSource.cpp IMateriaSource.cpp -Wall -Werror -Wextra -std=c++98 -o $(NAME)

fclean_spec:
	rm -f $(NAME)

clean: 
	rm -f $(NAME)

fclean: clean

re: fclean $(NAME)

.PHONY: all clean fclean re
