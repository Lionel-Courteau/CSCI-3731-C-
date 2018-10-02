#include <cstdio>
#include <cstring>
#include "ppm.h"



int main() {

	char fileName[50] = "test.ppm";
	char pSix[10];		
	int width = 0;		
	int height = 0;		
	int maximum = 0;	
	int size = 128;		

	// read the PPM file and store its contents inside an array and return the pointer to that array to pixelArray
	unsigned char* pixelArray = readPPM(fileName, pSix, &width, &height, &maximum);
}

