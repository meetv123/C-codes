#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a;
    double b;
    string c;
    
    cin>>a;
    cin>>b;
    cin.get();
    getline(cin,c);
    
    
    cout<<i + a<<endl;
    cout<<d + b<<endl;
    cout<<s + c<<endl;
    

    return 0;
}
