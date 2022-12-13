all: program

program: *.o
	g++ -o program *.o

*.o: *.cpp
	g++ -c *.cpp

run:
	./program

clean:
	rm -f *.o program


