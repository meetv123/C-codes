#include<iostream>
using namespace std;

int factorial(int n){
	
	
	if(n>1){
		return(n*factorial(n-1));
	}
	else{
		return 1;
	}
}
int main(){
	int fact,n;
	
	cout<<"Enter the number: "<<endl;
	cin>>n;
	
	fact=factorial(n);
	cout<<"The factorial of the number is: "<<fact<<endl;
     
    return 0;
}
