CC=g++

poli:
	g++ -o poli.exe poli.cpp
auto:
	g++ -std=c++0x -o auto.exe auto.cpp
sort:
	g++ -std=c++0x -o qsortex.exe qsortex.cpp
bubble:
	g++ -std=c++14 -ggdb -o bubble.exe bubblesort.cpp

iterator:
	g++ -std=c++14 -o iterator.exe iterator.cpp

all: poli auto sort iterator

.PHONY: poli auto sort all iterator

clean:
	rm *.exe
	rm *~
