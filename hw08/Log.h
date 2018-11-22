#ifndef LOG_H
#define LOG_H

#include <string>
#include <iostream>

class Log{
	private:
		Log();
	
	public:
		static const Log& getInstance();
		~Log();
		void print(const std::string& nameLog);
};
#endif