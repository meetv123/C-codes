#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char key[]="Mango";
	char buffer[50];
	
	do{
		cout<<"What is my favourite fruit"<<endl;
		cin>>buffer;
	}
	while(strcmp(key,buffer)!=0);
	cout<<"Answer is Correct"<<endl;
	return 0;
}
