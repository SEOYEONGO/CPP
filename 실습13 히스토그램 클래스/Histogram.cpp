#include <iostream>
#include <string>
#include <cstring>
#include "Histogram.h"

using namespace std;

void Histogram::put(string s){
	str.append(s);
}

void Histogram::putc(char c){
	string a="";
	a=c;
	str.append(a);
}

void Histogram::print(){		// 97-122
	cout<<str<<endl;
	len=str.length();
	for (int i=0;i<len;i++){			// 대문자라면 소문자로 다 바꿔. 
		if (isupper(str[i])) str[i]=tolower(str[i]);
	}
	// cout<<str<<endl;
		
	int cnt[122]={0};
	int countAlpha=0;
	for (int i=0;i<len;i++){
		if (isalpha(str[i])){		// 알파벳이면...cnt[아스키코드] 방의 숫자 증가. 
			cnt[(int)str[i]]++;
			countAlpha++;			// 전체 알파벳 갯수도 셀거임. 
		}
	}
	
	cout<<endl<<"총 알파벳 수 "<<countAlpha<<endl<<endl;
	
	for (int i=97;i<123;i++){
		cout<<(char)i<<" ("<<cnt[i]<<") \t : ";
		for(int j=0;j<cnt[i];j++){
			cout<<'*';
		}
		cout<<endl;
	}

}
