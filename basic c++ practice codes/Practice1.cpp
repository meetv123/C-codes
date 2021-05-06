#include<iostream>
using namespace std;

int main(){
	int marks[4]={66,55,77,88};
	int i;
	
	//for(int i=0; i<4;i++){
	//	cout<<"The marks of student is: "<<marks[i]<<endl;
	//}
	do{
		cout<<"The marks of student is: "<<marks[i]<<endl;
		i++;
		
	}
	while(i<4);
	return 0;
}
