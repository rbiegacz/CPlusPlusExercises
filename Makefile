CC=g++

poli:
	g++ -o poli.exe poli.cpp
auto:
	g++ -std=c++0x -o auto.exe auto.cpp
quick:
	g++ -std=c++0x -o quicksort.exe quicksort.cpp
	g++ -std=c++0x -o stdquicksort.exe stdquicksort.cpp
bubble:
	g++ -std=c++14 -ggdb -o bubble.exe bubblesort.cpp

iterator:
	g++ -std=c++14 -o iterator.exe iterator.cpp

all: poli auto sort iterator

.PHONY: poli auto all iterator bubble quick

clean:
	rm *.exe
	rm *~
