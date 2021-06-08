#include<iostream>
using namespace std;
template<class T1,class T2>

class A{
	public:
		T1 a;
		T2 b;
		
	A(T1 x,T2 y){
		a=x;
		b=y;
	}
	void display()
	{
		cout<<"The value of a and b: "<<a<<","<<b<<endl;
	}
};

int main(){
	A<int,float>d(4,5.6);
	d.display();
	return 0;
}
