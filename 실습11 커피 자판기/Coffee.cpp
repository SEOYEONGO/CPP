#include <iostream>
#include "Coffee.h"
using namespace std;

void CoffeeVendingMachine::run(){
	cout<<"*****  커피 자판기를 작동합니다.   *****"<<endl;
	while(1){
		cout<<"메뉴를 눌러주세요 (1: 에스프레소, 2: 아메리카노, 3: 설탕커피, 4: 잔량 보기, 5: 채우기)\n>> ";
		int op;
		cin>>op;
		
		switch(op){
		case 1:
			selectEspresso();
			show();
			break;
		
		case 2:
			selectAmericano();
			show();
			break;
			
		case 3:
			selectSugarCoffee();
			show();
			break;
			
		case 4:
			show();
			break;
		
		case 5:
			fill();
			break;
			
		default:
			cout<<"지원하지 않는 기능입니다."<<endl;
			break;
		}
		cout<<endl;
	}
	
}
