NAME = open

CC = c++
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3 -std=c++98
RM = rm -f

FILE = main \
ClapTrap \

SRCS = $(addsuffix .cpp, $(FILE))
OBJS = $(addsuffix .o, $(FILE))

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

.cpp.o : $(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	@echo "$(WHT)Removing o-files...$(EOC)"
	$(RM) $(OBJS)
	@echo "$(GREEN)clean done.$(EOC)"

fclean: clean
	@echo "$(WHT)Removing binary -files...$(EOC)"
	$(RM) $(NAME)
	@echo "$(GREEN)fclean done.$(EOC)"

re: fclean all

.PHONY: clean re fclean all