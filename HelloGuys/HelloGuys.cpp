#include <iostream>
#include <string>
using namespace std;

class Buffer{
	string text;
public:
	Buffer(string text) { this->text=text; }
	void add (string next) { text+=next;}
	void print() { cout<<text<<endl;}
	void plusText(string plus){
		text+=plus;
	} 
}; 

Buffer& append(Buffer& a, string plus){
	a.plusText(plus);
	return a;
}

int main (){
	Buffer buf("Hello");
	Buffer& temp=append(buf, "Guys");
	temp.print();
	buf.print();
}
