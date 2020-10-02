#include <iostream>
#include <string>
using namespace std;

class Circle{
	int radius;
public:
	Circle (int radius=0) {this->radius=radius;}
	int getRadius(){return radius;}
	void setRadius(int radius) { this->radius=radius;}
	double getArea(){return 3.14*radius*radius;}
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int r, string name) : Circle(r){
		this->name=name;
	}
	void show(){
		cout<<"반지름이 "<<getRadius()<<"인 "<<name;
	}
};

int main (){
	NamedCircle waffle(3, "waffle");
	waffle.show();
}
