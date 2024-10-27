CC = gcc

CFLAGS = -Werror -Wall -Wextra

TARGET = shell

SRC = shell.c

HEADERS = shell.h

$(TARGET): $(SRC) $(HEADERS)
	@$(CC) $(CFLAGS) -o $(TARGET) $(SRC)
	@echo "Run ./$(TARGET) to enter peky shell"

.PHONY: clean
clean:
	rm -f $(TARGET)
