#include<iostream>
using namespace std;

class A
{
	public:
		int a;
};

class B:  public virtual A
{
	public:
		int b;
};

class C: virtual public A
{
	public:
		int c;
};

class D: public B, public C
{
	public:
		int d;
};

int main()
{
	D obj;
	obj.d=10;   
	obj.c=20;
	obj.b=30;
	obj.a=40;
	
	cout<<"d="<<obj.d<<endl;
	cout<<"c="<<obj.c<<endl;
	cout<<"b="<<obj.b<<endl;
	cout<<"a="<<obj.a<<endl;
	
	return 0;
}