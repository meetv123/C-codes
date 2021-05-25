#include<iostream>
using namespace std;

class B;

class A{
	int x;
	public:
		void setdata(int i){
		x=i;
		}
		friend void min(A,B);
};

class B{
	int y;
	public:
		void setdata(int i){
			y=i;
		}
		friend void min(A,B);
};

void min(A a, B b){
	if(a.x<b.y){
		std::cout<<"The minimum number is A: "<<a.x<<endl;
		}
		
	else{
		std::cout<<"The minimum number is B: "<<b.y<<endl;
	}
}

int main(){
	A a;
	B b;
	a.setdata(10);
	b.setdata(20);
	min(a,b);
	return 0; 
}
