#include <lcourtea>
FILE* fp = fopen("filename", "r"); 
int value; 
while(fscanf(fp, "%d", value) != EOF) { 
	printf("%d\n", value); 
} 
fclose(fp);

FILE* fp = fopen("filename", "w"); 
fprintf(fp, "hohoho\n"); 
fclose(fp)