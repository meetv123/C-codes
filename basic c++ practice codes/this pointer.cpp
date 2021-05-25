#include<iostream>
using namespace std;

class Employee{
	int id;
	string name;
	float sal;
	public:
		Employee(int a, string b, float c){
			this->id=a;
			this->name=b;
			this->sal=c;
		}
		
		void display(){
			cout<<id<<" "<<name<<" "<<sal<<endl;
		}
};
int main(){
	Employee e1=Employee(001, "Meet", 10000);
	Employee e2=Employee(002, "Tirth", 15000.50);
	e1.display();
	e2.display();
}
