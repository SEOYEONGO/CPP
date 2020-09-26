#include <iostream>
using namespace std;

class Trace{
    static string tag[100];
    static string debug[100];
    static int size;
public: 
	static void put(string t, string d);
	static void print(string t);
};

string Trace:: tag[100];
string Trace:: debug[100];
int Trace:: size=0;

void Trace::put(string t, string d){
	tag[size]=t;
	debug[size]=d;
	size++;
}

void Trace::print(string t=" "){
	if (t==" "){
		cout<<"----- 모든 Trace 정보를 출력합니다. -----"<<endl;
		for (int i=0;i<size;i++){
			cout<<tag[i]<<" : "<<debug[i]<<endl;
		}
	}
	else {
		cout<<"----- "<<t<<" 태그의 Trace 정보를 출력합니다. -----"<<endl;
		for (int i=0;i<size;i++){
			if (tag[i]==t){
				cout<<tag[i]<<" : "<<debug[i]<<endl;
			}
		}
	}
}
void f(){
	int a,b,c;
	cout<<"두 개의 정수를 입력하세요>> ";
	cin>>a>>b;
	Trace::put("f()", "정수를 입력 받았음");	// 디버깅 정보 저장 
	c=a+b;
	Trace::put("f()", "합 계산");			// 디버깅 정보 저장 
	cout<<"합은 "<<c<<endl;
}

int main (){
	Trace::put("main()", "프로그램 시작합니다.");	// 디버깅 정보 저장 
	f();
	Trace::put("main()", "종료");		// put()의 첫 번째 매개 변수는 태그이고, 두번째 매개변수는 디버깅 정보이다.
	Trace::print("f()");	// "f()" 태그를 가진 디버깅 정보를 모두 출력한다.
	Trace::print();			// 모든 디버깅 정보를 출력한다. 
}
