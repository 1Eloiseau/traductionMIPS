all: main.o lectureEcriture.o traduction.o
	gcc main.o lectureEcriture.o traduction.o -o main

lectureEcriture.o: lectureEcriture.c fonctions.h
	gcc -c lectureEcriture.c

traduction.o: traduction.c
	gcc -c traduction.c

main.o: main.c
	gcc -c main.c