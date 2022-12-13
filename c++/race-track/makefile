all: program

program: *.o
	g++ -o program *.o 

*.o: *.cpp *.h
	g++ -c *.cpp

run: program
	./program

clean:
	rm -f *.o program
