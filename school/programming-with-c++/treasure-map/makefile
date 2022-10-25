# basic makefile for running program 
.PHONY: clean run

all: program 

program: *.o
	g++ -o program *.o

*.o: *.cpp
	g++ -c *.cpp

run:
	./program 

clean:
	rm program *.o
