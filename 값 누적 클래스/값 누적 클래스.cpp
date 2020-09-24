#include <iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value);		// 매개 변수 value로 멤버 value를 초기화한다. 
	Accumulator& add(int n);	// value에 n을 더해 값을 누적한다. 
	int get();				// 누적된 값 value를 리턴한다. 
}; 

Accumulator::Accumulator(int value){
	this->value=value;
}
Accumulator& Accumulator::add(int n){
	value+=n;
}
int Accumulator::get(){
	return value;
}

int main (){
	Accumulator acc(10);
	acc.add(5).add(6).add(7);	// acc의 value 멤버가 28이 된다.
	cout<<acc.get() ; 			// 28 출력 
}
