#include <iostream>
using namespace std;
int main (){
	cout<<30<<endl;	// 10진수로 출력
	cout.unsetf(ios::dec);	// 10진수 해제
	cout.setf(ios::hex); 	// 16진수로 설정
	cout<<30<<endl;
	 
	cout.setf(ios::showbase);	// 16진수에 0x접두어 붙이도록 설정
	cout<<30<<endl;
	
	cout.setf(ios::uppercase);	// 16진수의 A~F를 대문자로 출력 
	cout<<30<<endl;
	
	cout.setf(ios::dec | ios::showpoint); 	// 10진수 표현과 동시에 
											// 실수에 소숫점이하 나머지는 0으로 출력
	cout<<23.5<<endl;
	
	cout.setf(ios::scientific);		// 실수를 과학산술용 표현으로 출력	
	cout<<23.5<<endl;
	
	cout.setf(ios::showpos);		// 양수인 경우 + 부호도 함께 출력									
	cout<<23.5<<endl; 
}
