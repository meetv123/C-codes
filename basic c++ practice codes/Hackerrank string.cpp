#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2, s3;
    char a,b;
    int strlen1, strlen2;
    
    cin>>s1;
    cin>>s2;
    
    strlen1=s1.size();
    strlen2=s2.size();
    
    cout<<strlen1<<" "<<strlen2<<endl;
    
    s3=s1+s2;
    cout<<s3<<endl;
    
    a=s1[0];
    b=s2[0];
    s1[0]=b;
    s2[0]=a;
    cout<<s1<<" "<<s2<<endl;
    return 0;
}

