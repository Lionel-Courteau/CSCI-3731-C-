#include <cstdio>
#include <cstring>


unsigned char* readPPM(const char* fileName, char* pSix, int* width, int* height, int* maximum) {

	// open the file to read just the header reading
	FILE* fr = fopen(fileName, "r");

	// formatted read of header
	fscanf(fr, "%s", pSix);

	// check to see if it's a PPM image file
	if (strncmp(pSix, "P6" , 10) != 0) {
		printf("They are not the same\n");
	} else {
		printf("They are the same\n");
	}

	// read the rest of header
	fscanf(fr, "%d\n %d\n", width, height);

    fscanf(fr, "%d\n", maximum);

    // check to see if they were stored properly
    printf("PSix: %s\n", pSix);
    printf("Width: %d\n", *width);
    printf("Height: %d\n", *height);
    printf("Maximum: %d\n", *maximum);

    int size = *width * *height;

    // allocate array for pixels
    unsigned char* pixels = new unsigned char[size];

	// unformatted read of binary pixel data
	while (fread(pixels, sizeof(int), 128, fr)) {
		printf("%s", pixels);
	} // end of for loop

	// close file
	fclose(fr);

	// return the array
	return pixels;
	
} // end of readPPM 