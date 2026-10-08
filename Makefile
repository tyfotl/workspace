CC = clang
CFLAGS = -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wshadow
LDLIBS = -lcs50 -lm

hello: hello.c
	$(CC) $(CFLAGS) -o hello hello.c $(LDLIBS)
