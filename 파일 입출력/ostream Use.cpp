#include <iostream>
#include <fstream>
using namespace std;

int main (){
	char name[10], dept[20];
	int sid;
	
	cout<<"이름>>";
	cin>>name; 
	cout<<"학번(숫자로)>>";
	cin>>sid;	
	cout<<"학과>>";
	cin>>dept;  
	
	ofstream fout("c:\\Temp\\student.txt");
	if (!fout){
		cout<<"c:\\temp\\student.txt 파일을 열 수 없다";
		return 0;
	} 
	 

	fout<<name<<endl;
	fout<<sid<<endl;	
	fout<<dept<<endl;	
	
	fout.close();     
}
