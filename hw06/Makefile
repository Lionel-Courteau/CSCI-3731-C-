all: pr03.exe

pr03.o: pr03.cc
	g++ -c pr03.cc
	
pr03.exe: pr03.o ppm.o
	g++ -o pr03.exe pr03.o ppm.o
	
ppm.o: ppm.cc ppm.h
	g++ -c ppm.cc