NAME	= megaphone

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

SRCS	= megaphone.cpp

OBJS	= $(SRCS:.cpp=.o)

GREEN	= \033[32m
RED		= \033[31m
RESET	= \033[0m

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo "$(GREEN) $(NAME), Great news, It compiled! $(RESET)"

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)
		@echo "$(RED) Object .o files is gone dy! $(RESET)"

fclean: clean
		$(RM) $(NAME)
		@echo "$(RED)Executeies is removed $(RESET)"

re: fclean all

.PHONY: all clean fclean re
