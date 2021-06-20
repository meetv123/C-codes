#include<iostream>
using namespace std;
void reversearr(int arr[],int start,int end){
	int temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	start++;
	end--;
}

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		cout<<endl;
	}
}

int main(){
	
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(0);
	
	print(arr,n);

	
	reversearr(arr,0,n-1);
	cout<<"Reversed array is: "<<endl;
	print(arr,n);
	
	return 0;
	
	
}
