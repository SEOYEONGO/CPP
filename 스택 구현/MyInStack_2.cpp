#include <iostream>
using namespace std;

class MyInStack{
	int *p;
	int size;
	int tos;
public:
	MyInStack(){
		size=1;
		tos=-1;
		p=new int[size];
	}
	
	MyInStack(int size){
		tos=-1;
		this->size=size;
		p=new int[size];
	}
	
	MyInStack(MyInStack& s){		// 복사 생성자 
		this->size=s.size;
		this->tos=s.tos;
		this->p = new int[s.size];
		for (int i=0; i<this->tos;i++){
			this->p[i]=s.p[i];
		}
	}
	
	bool push (int n){
		if (tos==size-1) return false;
		else {
			p[++tos]=n;
			return true;
		}
	}
	bool pop (int &n){
		if (tos==-1) return false;
		else {
			n=p[tos--];
			return true;
		}
	}
	
	~MyInStack(){
		if (p)
			delete []p;
	}
}; 

int main (){
	MyInStack a(10);
	if (a.push(10)) cout<<"푸시 성공"<<endl;
  	if (a.push(20)) cout<<"푸시 성공"<<endl;
	MyInStack b(a);	// 복사 생성
	if (b.push(30)) cout<<"푸시 성공"<<endl;
	
	int n;
	if (a.pop(n)) cout<<"스택 a에서 팝한 값 "<<n<<endl;
	else cout<<"팝 실패"<<endl;
	
	if (b.pop(n)) cout<<"스택 b에서 팝한 값 "<<n<<endl;  
	else cout<<"팝 실패"<<endl;
}
