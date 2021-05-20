#include<iostream>
using namespace std;

class Student{
	public:
		int id;
		string name;
};

int main(){
	Student s1;
	Student s2;
	s1.id=254;
	s1.name="Meet";
	s2.id=250;
	s2.name="Tirth";
	
	cout<<"The name of the student is: "<<s1.name<<endl;
	cout<<"The id of the student is: "<<s1.id<<endl;
	cout<<"The name of the second student is: "<<s2.name<<endl;
	cout<<"The id of the second student is: "<<s2.id<<endl;
	return 0;
}
