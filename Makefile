all: main.o lectureEcriture.o
	gcc main.o lectureEcriture.o -o main

lectureEcriture.o: lectureEcriture.c fonctions.h
	gcc -c lectureEcriture.c

main.o: main.c
	gcc -c main.c