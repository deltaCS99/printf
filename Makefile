CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

HEADER = main.h

TARGET = test_printf

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS) tests/main.c
	$(CC) $(CFLAGS) $(OBJS) tests/main.c -o $(TARGET)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

