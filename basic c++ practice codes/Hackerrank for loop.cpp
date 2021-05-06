#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n,a,b;
    char *str[]={"one","two","three","four","five","six","seven","eight","nine"};
    cin>>a;
    cin>>b;
    
    for(n=a;n<=b;n++){
        if(n<=9){
            cout<<str[n-1]<<endl;
        }
        else{
            if(n>=9 && n%2==0){
                cout<<"even"<<endl;
                
            }
            else{
                cout<<"odd"<<endl;
            }
        }
    }
    return 0;
}
