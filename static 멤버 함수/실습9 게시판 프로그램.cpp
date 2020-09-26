#include <iostream>
using namespace std;

class Board{
	static string s[100];
	static int pos;
public:
	static void add(string text);
	static void print();
};

string Board::s[100];
int Board::pos=0;

void Board::add(string text){
	s[pos++]=text;
}

void Board::print(){
	cout<<"********  게시판 입니다.  ********"<<endl;
	for (int i=0;i<pos;i++){
		cout<<i<<": "<<s[i]<<endl;
	}
	cout<<endl;
}

int main (){
	Board::add("중간고사는 감독 없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해주세요.");
	Board::print();
	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요.");
	Board::print();
}
