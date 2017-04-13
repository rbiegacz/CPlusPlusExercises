CC=g++
poli:
	g++ -o poli.exe poli.cpp
auto:
	g++ -std=c++0x -o auto.exe auto.cpp
sort:
	g++ -std=c++0x -o qsortex.exe qsortex.cpp
all: poli auto sort
clean:
	rm *.exe
