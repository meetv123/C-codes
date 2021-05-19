#include<iostream>
using namespace std;

int volume(int r, int h){
	return(3.14*r*r*h);
}

int volume(int a){
	return(a*a*a);
}

int volume(int l,int b, int h){
	return(l*b*h);
}
int main(){
	cout<<"The volume of cylinder: "<<volume(3,5)<<endl;
	cout<<"The volume of cube: "<<volume(3)<<endl;
	cout<<"The volume of cuboid: "<<volume(3,5,6)<<endl;
	return 0;
	
}
