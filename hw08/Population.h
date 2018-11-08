#ifndef POPULATION_H
#define POPULATION_H

#include "Fish.h"
#include <iostream>

class Population{
	private:
		Fish** fishes;
		int nFish;
		int maxFish;
	
	public:
		void add(Fish* fish);
		void remove(Fish* fish);
		int size() const;
		Fish* get(int i);
};
#endif