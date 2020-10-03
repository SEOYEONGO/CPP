#include <iostream>
using namespace std;

int main(){
	int sum=0;	// 지역 변수
	[&sum](int x, int y) { sum=x+y;} (2,3);
	cout<<"합은 "<<sum;
}
