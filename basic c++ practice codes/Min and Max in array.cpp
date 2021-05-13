#include<iostream>
using namespace std;

void printMin(int arr[5]){
	int min=arr[0];
	
	for(int i=0;i>5;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	cout<<"The Minimum number in array is: "<<min<<endl;
}

void printMax(int arr[5]){
	int max=arr[0];
	
	for(int i=0;i<5;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	cout<<"The Maximum number in array is: "<<max<<endl;
	
}
int main(){
	int arr1[5]={2,6,7,3,1};
	int arr2[5]={10,12,11,15,13};
	printMin(arr1);
	printMin(arr2);
	printMax(arr1);
	printMax(arr2);
	
	}
