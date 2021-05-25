#include<iostream>
using namespace std;
class A{
	public:
		int x;
		A(int a){       //Parameterized constructor
			x=a;
		}
		A(A &i){        //Copy Constructor
			x=i.x;
		}
};
int main(){
	A a1(20);   //Calling Parameterized Constructor
	A a2(a1);   //Calling Copy Constructor
	cout<<a2.x;
	
}
