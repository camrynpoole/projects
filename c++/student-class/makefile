.PHONY: clean run

all: program

program: *.o
	g++ -o program *.o

*.o: *.cpp
	g++ -c *.cpp

*.cpp: *.h

run:
	./program

clean:
	rm program *.o
