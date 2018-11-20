#include "Population.h"


Population::Population(int fishes){
	maxFish = 100;
	fishes = new Fish*[maxFish];
	size = 0;
}

void add(Fish* f){
	fishes[size] = f;
	size++;
}

int getSize() const{
	return size;
}

Fish* get(int index) const{
	return fishes[index];
}

/*void remove(Fish* f){
	fishes[size] = f;
	size--;
}*/

Population::~Population(){
	delete fishes[];
}