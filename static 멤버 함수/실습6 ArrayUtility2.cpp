#include <iostream>
using namespace std;
#define SIZE 5

class ArrayUtility2{
public:
	// s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 리턴 
	static int* concat(int s1[], int s2[], int size);
	
	// s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴. 리턴하는 배열의 크기는
	// retSize에 전달. retSize가 0인 경우 NULL 리턴
	static int* remove (int s1[], int s2[], int size, int& retSize);

}; 

int* ArrayUtility2::concat(int s1[], int s2[], int size){
	int *p=new int[size*2];
	for (int i=0;i<size;i++){
		p[i]=s1[i];
	}
	for (int i=5, j=0; j<size;i++,j++){
		p[i]=s2[j];
	}
	return p;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize){
	int *sel=new int[size];
	int cnt=0;
	for (int i=0, j;i<size;i++){
		for (j=0;j<size;j++){
			if (s1[i]==s2[j]) break;
		}
		if (j==size) sel[cnt++]=s1[i];
	}
	retSize=cnt;
	return sel;
}

int main(){
	int x[SIZE], y[SIZE], *p;
	int retSize;
	cout<<"정수를 "<<SIZE<<" 개 입력하라. 배열 x에 삽입한다 >> ";
	for (int i=0;i<SIZE;i++){
		cin>>x[i];
	}
	cout<<"정수를 "<<SIZE<<" 개 입력하라. 배열 x에 삽입한다 >> ";
	for (int i=0;i<SIZE;i++){
		cin>>y[i];
	}
	cout<<endl;
	
	p=ArrayUtility2::concat(x,y,SIZE);
	cout<<"합친 정수 배열을 출력한다"<<endl;
	for (int i=0;i<SIZE*2;i++){
		cout<<p[i]<<' ';
	}
	cout<<endl;
	
	p=ArrayUtility2::remove(x,y,SIZE, retSize);
	cout<<"배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 "<<retSize<<endl;
	for (int i=0;i<retSize;i++){
		cout<<p[i]<<' ';
	}
}
