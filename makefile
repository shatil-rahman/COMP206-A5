LinkedList: main.o List.o
	gcc -o LinkedList main.o List.o
main.o: main.c
	gcc -c main.c
List.o: List.c
	gcc -c List.c
