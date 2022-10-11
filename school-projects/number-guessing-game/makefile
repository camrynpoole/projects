all: program

program: *.o
	g++ *.o -o program

*.o: *.cpp
	g++ -c *.cpp

*.cpp: *.h

clean:
	rm *.o program

run:
	./program
