#include "Population.h"
#include <cstdio>

Population::Population(int nFish){
	maxFish = 100;
	fishes = new Fish*[maxFish];
	size = 0;
}

void Population::add(Fish* f){
	fishes[size] = f;
	size++;
}

int Population::getSize() const{
	return size;
}

Fish* Population::get(int index) const{
	return fishes[index];
}

/*void Population remove(Fish* f){
	for(int i = 0; fish[i]=? ; ++i){
		if(){
			
		}
	}
	fishes[size] = f;
	size--;
}*/

Population::~Population(){
	delete [] fishes;
}