#ifndef COFFEE_H
#define COFFEE_H
#include <iostream>
using namespace std;

class Container{	// 통하나를 나타내는 클래스
	int size;		// 현재 저장 량, 최대 저장량은 10
public:
	Container() { size=10;}
	void fill() { size=10;} 	// 최대량(10)으로 채우기
	void consume() { size--;}   // 1만큼 소모하기 
	int getSize() { return size; } // 현재 크기 리턴 
};

class CoffeeVendingMachine{
	
	Container tong[3];		// tong[0]는 커피, tong[1]는 물, tong[2]는 설탕통을 나타냄
	
	void fill(){			// 3개의 통을 모두 10으로 채움 
		tong[0].fill(); 		tong[1].fill();		tong[2].fill();
	}
	
	void selectEspresso(){	// 에스프레소를 선택한 경우, 커피1, 물1 소모
		if (tong[1].getSize()<=0 || tong[0].getSize()<=0){
			cout<<"죄송하지만 원료가 다 떨어졌네요~ "<<"원료를 채워주세요!"<<endl;
		}
		else {
			tong[0].consume();		tong[1].consume();
			cout<<"에스프레소 나왔습니다~ 맛있게 드세요 *^^*"<<endl;
		}
	}
	
	void selectAmericano(){	// 아메리카노를 선택한 경우, 커피1, 물2 소모
		if (tong[1].getSize()<=0 || tong[0].getSize()<=1){
			cout<<"죄송하지만 원료가 다 떨어졌네요~ "<<"원료를 채워주세요!"<<endl;
		}
		else {
			tong[0].consume();		tong[1].consume();		tong[1].consume();
			cout<<"아메리카노 나왔습니다~ 맛있게 드세요 *^^*"<<endl;
		}
	}
	
	void selectSugarCoffee(){ // 설탕커피를 선택한 경우, 커피1, 물2 소모, 설탕 1 소모 
		if (tong[1].getSize()<=0 || tong[0].getSize()<=1 || tong[2].getSize()<=0){
			cout<<"죄송하지만 원료가 다 떨어졌네요~ "<<"원료를 채워주세요!"<<endl;
		}
		else {
			tong[0].consume();		tong[1].consume();		tong[1].consume();		tong[2].consume();
			cout<<"SugarCoffee 나왔습니다~ 맛있게 드세요 *^^*"<<endl;
		}	
	}
	
	void show(){		 	// 현재 커피, 물, 설탕의 잔량 출력
		cout<<"커피 "<<tong[0].getSize()<<", "<<"물 "<<tong[1].getSize() <<", "<<"설탕 "<<tong[2].getSize()<<endl;
	}
public:
	void run();		// 커피 자판기 작동 
}; 

#endif
