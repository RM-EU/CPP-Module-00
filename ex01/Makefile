CC++ = c++
C++FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = phonebook

SRCS = Contact.cpp\
		main.cpp\
		PhoneBook.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC++) $(C++FLAGS) -o $(NAME) $(OBJS)


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re