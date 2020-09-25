#include <iostream>
#include <string>
using namespace std;

bool bigger(int a, int b, int& big){
	if (a==b) return true;
	else {
		a>b?big=a:big=b;
		return false;
	} 
}

int main (){
	int a,b, big;
	cin>>a>>b;
	if (bigger(a,b,big)==0)cout<<big;
	else cout<<"두 수가 같습니다.";
}
