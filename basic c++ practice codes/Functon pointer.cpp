#include<iostream>
using namespace std;

void name(char* name1){
	
	cout<<"Name is: "<<name1<<endl;
}
int main(){
	char s[20];
	void(*ptr)(char*);
	ptr=name;
	cin>>s;
	cout<<s<<endl;
	ptr(s);
	
	return 0;
	
}
