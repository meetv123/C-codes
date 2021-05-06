#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
	char oper;
	float num1,num2;
	
	cout<<"Enter number 1: "<<endl;
	cin>>num1;
	cout<<"Enter number 2: "<<endl;
	cin>>num2;
	cout<<"Enter the operator: "<<endl;
	cin>>oper;
	
	switch(oper){
		case '+':
			cout<<" The sum of two numbers is: "<<num1+num2<<endl;
			break;
		
		case '-':
			cout<<"The subtraction of two numbers is: "<<num1-num2<<endl;
			break;
		
		case '*':
			cout<<"The multiplication of two numbers is: "<<num1*num2<<endl;
			break;
			
		case '/':
			cout<<"The division of two numbers is: "<<num1/num2<<endl;
			break;
			
		default:
			cout<<"The the operator does not match"<<endl;
			break;
			
	}
	
		
		
return 0;		
}
