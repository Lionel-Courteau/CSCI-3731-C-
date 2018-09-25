#include <iostream>

void swap(int* a, b, temp)
{
	a = 15, b = 30;
	printf("Before swapping: a=%d, b=%d" &a, &b);
	
	temp = &a;
	a = &b;
	b = &temp;
	printf("After swapping: a=%d, b=%d" &a, &b);
}