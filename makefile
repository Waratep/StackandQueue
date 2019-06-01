all: SandQ.c main.c
	gcc -c SandQ.c -o SandQ.o
	gcc -c main.c -o main.o
	gcc SandQ.o main.o -o main

clean: 
	del SandQ.o main.o main.exe
	# rm SandQ.o main.o main.exe