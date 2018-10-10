#include <cstdio>

# Little / Big Endian
int main() { 
	int x = 987654321; 
	unsigned char *y = (unsigned char*)&x; 
	for(int i = 0; i <= sizeof(x)/2; ++i){
		printf("%x", y[i]);
	}
}
