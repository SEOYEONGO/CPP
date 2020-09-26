#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random{
public:
	// 항상 다른 랜덤수를 발생시키기 위한 seed를 설정하는 함수
	static void seed(){ srand((unsigned int)time(NULL));}
	static int nextInt(int , int );	// min과 max 사이의 랜덤 정수 리턴 
	static char nextAlphabet();	// 랜덤 알파벳 문자 리턴 
	static double nextDouble();	// 0보다 크거나 같고 1보다 적은 랜덤 실수 리턴 
};

int Random::nextInt(int min=0, int max=32767){
	return rand()%max+min;
} 

char Random::nextAlphabet(){
	bool n=rand()%2;
	if (n){		// 대문자 
		return (char)(rand()%26+65);
	}
	else {		// 소문자 
		return (char)(rand()%26+97);
	}
}

double Random::nextDouble(){
	return rand()/(double)(RAND_MAX + 1); // 0부터 32767의 정수를 32768로 나누면 실수가 나온다. 
}

int main (){
	Random::seed();
	cout<<"1에서 100까지 랜덤한 정수 10개를 출력합니다."<<endl;
	for (int i=0;i<10;i++){
		cout<<Random::nextInt(1, 100)<<' ';
	} 
	cout<<endl;
	cout<<"알파벳을 랜덤하게 10개 출력합니다."<<endl;
	for (int i=0;i<10;i++){
		cout<<Random::nextAlphabet()<<' ';
	}
	cout<<endl;
	cout<<"랜덤한 실수를 10개 출력합니다."<<endl;
	for(int i=0;i<5;i++){
		cout<<Random::nextDouble()<<' ';
	}
	cout<<endl;
	for(int i=0;i<5;i++){
		cout<<Random::nextDouble()<<' ';
	}
}
