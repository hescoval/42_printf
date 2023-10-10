NAME = libftprintf.a
OBJS = *.o
FILES = *.c
ARCHIVER = ar rcs
CCW = cc -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(ARCHIVER) $(NAME) $(OBJS)

$(OBJS): $(FILES)
	$(CCW) -c $(FILES)

clean:
	rm -rf *.o 

fclean: clean
	rm -rf $(NAME)
