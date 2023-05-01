graphs:
	gcc main.c LinkedList.c LinkedList.h Graph.c -o output
	./output
debug:
	gcc main.c -g LinkedList.c LinkedList.h Graph.c
	gdb a.out
