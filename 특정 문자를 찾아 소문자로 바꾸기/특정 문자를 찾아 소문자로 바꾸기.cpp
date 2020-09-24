#include <iostream>
#include <ctype.h>
using namespace std;

char& find(char a[], char c, bool& success){
	for (int i=0;i<a[i]!='0';i++){
		if (a[i]==c){
			a[i]=tolower(c);
			success=true;
			return a[i];	
		}
	}
	return c;
} 

int main (){
	char s[]="Mike";
	bool b=false ;
	char& loc=find(s,'M',b);
	if (b==false){
		cout<<"M을 발견할 수 없다"<<endl;
		return 0;
	}
	loc='m';
	cout<<s<<endl;
}
