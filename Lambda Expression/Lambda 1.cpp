#include <iostream>
#include <string>
using namespace std;

int main(){
//	[](int x, int y) { cout<<"합은 "<<x+y; } (2,3); // 람다식 실행 
	auto love=[](string a, string b){
		cout<<a<<"보다 "<<b<<"가 좋아"<<endl;
	};
	
	love("돈", "너");
	love("냉면","만두");
} 


