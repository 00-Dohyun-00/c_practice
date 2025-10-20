main: main.c
	clang main.c -o main

run: main
	./main
	
# 	사용법: make run