#include<iostream>
using namespace std;

	int swapRefVar(int &a, int &b){
		int temp= a;
		a= b;
		b= temp;
	}
int main(){
	int x=4, y=5;
	cout<<"The value of a: "<<x<<" The value of b: "<<y<<endl;
	swapRefVar(x,y);
	cout<<"The value of a: "<<x<<" The value of b: "<<y<<endl;
	
	return 0;
}	

