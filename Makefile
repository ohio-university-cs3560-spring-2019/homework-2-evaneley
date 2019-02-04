prog1: main.o prog1.a
	g++ main.o -L./lib -l:prog1.a -o prog1
main.o: main.cc ./include/prog1.h
	g++ -I ./include -c main.cc
prog1.a: prog1.o
	ar rcs ./lib/prog1.a prog1.o
prog1.o: prog1.cc ./include/prog1.h
	g++ -I ./include -c prog1.cc
./include/prog1.h: ./lib
	mkdir -p include
	cp prog1.h ./include
./lib:
	mkdir -p lib
clean:
	rm -f *o
