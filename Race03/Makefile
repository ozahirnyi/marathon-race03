NAME = race03
SRCS = src/mx_strlen.c \
    src/mx_israng.c \
    src/mx_atoi.c \
    src/mx_printchar.c \
    src/pair.c \
    src/assamption.c \
    src/mx_bubble_sort.c \
    src/mx_printstr.c \
    src/straight.c \
    src/chartoint.c \
    src/issuit.c \
    src/mx_isdigit.c \
    src/mx_strcmp.c \
    src/main.c \
    src/straightflush.c \
    src/flush.c \
    src/mx_isspace.c \
	src/mx_printstrerr.c \
	src/mx_printcharerr.c
    
INC = inc/header.h
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
all: install clean
install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCS) -I $(INC)
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf header.h
	@rm -rf mx_strlen.c \
        mx_israng.c \
        mx_atoi.c \
        is_four.c \
        mx_printchar.c \
        pair.c \
        assamption.c \
        mx_bubble_sort.c \
        mx_printstr.c \
        straight.c \
        chartoint.c \
        issuit.c \
        mx_isdigit.c \
        mx_strcmp.c \
        main.c \
        straightflush.c \
        flush.c \
        mx_isspace.c \
        mx_printstrerr.c \
		mx_printcharerr.c
reinstall: uninstall clean all  
