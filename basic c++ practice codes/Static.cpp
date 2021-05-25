#include<iostream>
using namespace std;

class Account{
	int accno;
	string name;
	static float roi;
	public:
		Account(int accno, string name){
			this->accno=accno;
			this->name=name;
		}
		void display(){
			cout<<accno<<" "<<name<<" "<<roi<<endl;
		}
};
float Account::roi=6.5;

int main(){
	Account a1=Account(123,"Meet");
	Account a2=Account(1234, "Tirth");
	a1.display();
	a2.display();
	return 0;
}
