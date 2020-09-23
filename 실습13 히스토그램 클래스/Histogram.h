#ifndef HISTOGRAM_H 
#define HISTOGRAM_H 

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Histogram{
	string str;
	int len;
public:
	Histogram(string str){
		this->str=str;
		len=str.length();
	}

	void put(string s);
	void putc(char c);
	void print();
};

#endif
