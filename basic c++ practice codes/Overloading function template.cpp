#include<iostream>
using namespace std;

template<class X>void func(X a)
{
	cout<<"The value of a: "<<a<<endl;
}

template<class Y>void func(Y b,Y c)
{
	cout<<"The value of b: "<<b<<endl;
	cout<<"The value of c: "<<c<<endl;
}

int main(){
	func(22);
	func(12,21);
	return 0;
}
