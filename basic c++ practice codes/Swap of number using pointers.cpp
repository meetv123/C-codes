#include<iostream>
using namespace std;

int main(){
	int a=5,b=10;
	int* p1=&a;
	int* p2=&b;

	cout<<" The number before swap for a is "<<*p1<<" and "<<"b is "<<*p2<<endl;
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
	cout<<" The number after swap for a is "<<*p1<<" and "<<"b is "<<*p2<<endl;
	return 0;
}
