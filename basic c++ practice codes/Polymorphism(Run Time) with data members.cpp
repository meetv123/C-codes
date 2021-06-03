#include<iostream>
using namespace std;

class Animal{
	public:
		string color="Black";
};

class Dog:public Animal{
	public:
		string color="grey";
};

int main(){
	Animal d=Dog();
	d.color;
	return 0;
}
