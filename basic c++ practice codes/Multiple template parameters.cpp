#include<iostream>
using namespace std;

template<class X,class Y>void func(X a,Y b)
{
	cout<<"The value of a: "<<a<<endl;
	cout<<"The value of b: "<<b<<endl;
}

int main(){
	func(10,15);
}
