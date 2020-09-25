#include <iostream>
#include <string >
using namespace std;

class Matrix{
	int x,y,z,k;
public:
	Matrix(int x=0,int y=0, int z=0, int k=0){
		this->x=x; this->y=y; this->z=z; this->k=k;
	}
	
	void show(){
		cout<<"Matrix = { "<<x<<' '<<y<<' '<<z<<' '<<k<<" }"<<endl;
	}
	
	Matrix operator + (Matrix& b){
		Matrix c;
		c.x= x+b.x;
		c.y= y+b.y;
		c.z= z+b.z;
		c.k= k+b.k;
		return c;
	}
	
	Matrix& operator += (Matrix& b){
		x += b.x;
		y += b.y;
		z += b.z;
		k += b.k;
		return *this;
	}
	
	bool operator == (Matrix& b){
		if (x==b.x && y==b.y && z==b.z && k==b.k) return true;
		else return false;
	}

}; 

int main (){
	Matrix a(1,2,3,4), b(2,3,4,5), c;
	c=a+b;
	a+=b;
	a.show(); b.show(); c.show();
	if (a==c) cout<<"a and c are the same"<<endl;
}
