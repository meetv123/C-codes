#include<iostream>
using namespace std;

class Employee{
	public:
		int id;
		string name;
		int sal;
		
		Employee(int i, int s, string n){
			id=i;
			name=n;
			sal=s;
		}
		
		void display(){
			cout<<"The name of the employee: "<<name<<endl;
			cout<<"The employee id of the employee: "<<id<<endl;
			cout<<"The salary of the employee: "<<sal<<endl;
		}
};
int main(){
	Employee e1=Employee(001,10000,"Meet");
	Employee e2=Employee(002,11000,"Tirth");
	e1.display();
	e2.display();
	return 0;
}
