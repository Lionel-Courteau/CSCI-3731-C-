#include <iostream>
#include "Log.h"

Log::Log(){
	
}

const Log& Log::getInstance(){
	static Log instance;
	return instance;
}

Log::~Log(){
	
}

void Log::print(const std::string& nameLog){
	std::cout <<nameLog<< std::endl;
}