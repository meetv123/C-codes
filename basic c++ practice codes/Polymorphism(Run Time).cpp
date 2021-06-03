#include<iostream>
using namespace std;

class Animal{
	public:
		void eat(){
			cout<<"easting..."<<endl;
		}
};

class Dog:public Animal{
	public:
		void eat(){
			cout<<"dog eating..."<<endl;
		}
};

int main(){
	Dog d;
	d.eat();
	return 0;
	
}
