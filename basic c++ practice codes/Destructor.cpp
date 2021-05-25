#include<iostream>
using namespace std;

class Demo{
	public:
		Demo(){
			cout<<"Constructor invoked"<<endl;
		}
		
		~Demo(){
			cout<<"Destructor invoked"<<endl;
		}
};

int main(){
	Demo d1;
	Demo d2;
}
