all: pr06.exe

pr06.o: pr06.cc
	g++ -c pr06.cc
	
pr06.exe: pr06.o ppm.o
	g++ -o pr06.exe pr06.o ppm.o
	
ppm.o: ppm.cc ppm.h
	g++ -c ppm.cc