#include <iostream>
#include "Shape.h"
using namespace std;

void Shape::paint(){
	draw();  // 동적 바인딩 
}
/*
void Shape::draw(){
	cout<<"--Shape--"<<endl;
} 
*/
Shape* Shape::add(Shape * p){
	this->next=p;
	return p;
}
