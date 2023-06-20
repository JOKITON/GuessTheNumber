NAME = Game

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm

SRCS = main.c


all : $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean :
	$(RM) $(NAME)
