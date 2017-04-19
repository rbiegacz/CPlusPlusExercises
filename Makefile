CC=g++
GDB=-ggdb

poli:
	g++ $(GDB) -o poli.exe poli.cpp
quick:
	g++ -std=c++0x $(GDB) -o quicksort.exe quicksort.cpp
	g++ -std=c++0x $(GDB) -o stdquicksort.exe stdquicksort.cpp
bubble:
	g++ -std=c++14 $(GDB) -o bubble.exe bubblesort.cpp

iterator:
	g++ -std=c++14 $(GDB) -o iterator.exe iterator.cpp

all: poli quick iterator bubble

.PHONY: poli auto all iterator bubble quick

clean:
	rm *.exe
	rm *~
