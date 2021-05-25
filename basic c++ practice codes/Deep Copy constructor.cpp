#include<iostream>
using namespace std;

class Demo{
	int a;
	int b;
	int *p;
	public:
		Demo(){
			p=new int;
		}
		Demo(Demo &d){
			a=d.a;
			b=d.b;
			p=new int;
			*p=*(d.p);
		}
		void setdata(int x, int y, int z){
			a=x;
			b=y;
			*p=z;
		}
		void showdata(){
			cout<<a<<endl;
			cout<<b<<endl;
			cout<<*p<<endl;
		}
};

int main(){
	Demo d1;
	d1.setdata(4,5,7);
	Demo d2=d1;
	d2.showdata();
}
