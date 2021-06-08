#include<iostream>
using namespace std;

template<class T> T add(T &a,T &b)
{
	T result=a+b;
	return result;
}

int main(){
	int x=4;
	int y=5;
	float m=4.5;
	float n=5.5;
	
	cout<<"Addition of x and y: "<<add(x,y)<<endl;
	cout<<"Addition of m and n: "<<add(m,n)<<endl;
	return 0;
}
