#include<iostream>
using namespace std;

class Employee{
	public:
		int emp_id;
		string emp_name;
		float emp_sal;
		
		void insert(int i,float s, string n){
			emp_id=i;
			emp_name=n;
			emp_sal=s;
		}
		void display(){
			cout<<"The name of the employee: "<<emp_name<<endl;
			cout<<"The employee id of the employee: "<<emp_id<<endl;
			cout<<"The salary of the employee: "<<emp_sal<<endl;
			
		}
};

int main(){
	Employee e1;
	Employee e2;
	
	e1.insert(001,10000,"Meet");
	e2.insert(002,11500.50,"Tirth");
	e1.display();
	e2.display();
	
	return 0;
}
