#include<iostream>
using namespace std;
template<class T>

class A{
	public:
		int num1=5;
		int num2=6;
		void add(){
		cout<<"The addition of both numbers is: "<<num1+num2<<endl;
		}
		
		
};

int main(){
	A<int> a;
	a.add();
	return 0;
	
}

