#ifndef POPULATION_H
#define POPULATION_H

#include "Fish.h"
#include <iostream>

class Population{
	private:
		Fish** fishes;
		
		int maxFish;
		int size;
	
	public:
		Population(int nFish);
		void add(Fish* f);
		void remove(Fish* f);
		int getSize() const;
		Fish* get(int index) const;
		~Population();
};
#endif