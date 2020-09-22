#ifndef DATE_H
#define DATE_H
#include <string>
class Date{
	int year, month, day;
public:
	Date(int x, int y, int z);
	Date(std::string date);
	int getYear();
	int getMonth();
	int getDay();
	void show();
};
#endif
