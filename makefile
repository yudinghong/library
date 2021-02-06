CFLAGS = -I ./headers
objects = main.o app.o
src = ./sources/
head = ./headers/

library.exe: $(objects) 
	gcc -o library $(objects)

main.o: main.c app.o
	gcc -c main.c app.o -o main.o

app.o: $(src)app.c $(head)linklist.h
	gcc -c $< -o $@

.PHONY: clean

clean: 
	del *.o library.exe