CC = clang
CFLAGS = -Wall -Wextra -std=c17
SRC = $(wildcard *.c) # 폴더의 모든 .c 자동 링크

main: $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

run: main
	./main

clean:
	rm -f main *.o

# 	사용법: make run