#include<iostream>
using namespace std;

void getminmax(int arr[],int n){
	int min=arr[0];
	int max=arr[0];
	
	for(int i=0;i<n;i++){
		if(min>arr[i]){
			min=arr[i];
		}
		if(max<arr[i]){
			max=arr[i];
		}
	}
	cout<<min<<endl;
	cout<<max<<endl;
	
}

int main(){
	int arr[]={1,2,3,4,5};
	
	int n=5;
	
	getminmax(arr,n);
	
	return 0;
	
}
