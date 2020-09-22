#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

Date::Date(int x, int y, int z){
	year=x, month=y, day=z;
}

Date::Date(std::string date){
	int index1=date.find("/");
	int index2=date.find("/", index1+1);

	year=stoi(date.substr(0, index1));	  //문자열(시작점, 개수) 
	month=stoi(date.substr(index1+1, index2-index1-1));
	day=stoi(date.substr(index2+1, date.length()-index2-1));

}

void Date::show(){
	cout<<year<<"년 "<<month<<"월 "<<day<<"일"<<endl;
}

int Date::getYear(){
	return year;
}

int Date::getMonth(){
	return month;
}

int Date::getDay(){
	return day;
} 
