#include <iostream>
#include "Shape.h"
using namespace std;

void Shape::paint(){
	draw();  // ���� ���ε� 
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