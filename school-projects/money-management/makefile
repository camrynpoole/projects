all: program

program: *.o
	g++ -o program *.o

*.o: *.cpp
	g++ -c *.cpp

*.cpp: *.h

clean:
	rm program *.o

run: 
	./program
