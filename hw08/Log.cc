#ifndef LOG_H
#define LOG_H

class Log{
	printf(const std::string& messode);
	static log& getInstance();
}

const Log& Log::getInstance(){
	static Log instance;
	return instance;
}

void 