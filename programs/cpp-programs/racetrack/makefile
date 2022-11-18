all: program

program: *.o
	gcc -o program *.o

*.o: *.cpp *.h
	gcc -c *.cpp

run: program
	./program

clean:
	rm -f *.o program
