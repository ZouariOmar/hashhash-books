//Single Inheritance

#include<iostream>
using namespace std;

class A
{
	private:
	int a=1;
	protected:
	int b=2;
	public:
	int c=3;
	void Ashow()
	{
		cout<<"In Ashow function\n";
	}
};

class B: public A 
{
	private:
	int d=4;
	protected:
	int e=5;
	public:
	int f=6;
	void Bshow()
	{
		cout<<"In Bshow function\n";
		//cout<<" a="<<a;
		//cout<<" b="<<b;
		//cout<<" c="<<c;
		//cout<<" d="<<d;
		//cout<<" e="<<e;
		//cout<<" f="<<f<<endl;
	}
};

int main()
{
	B s;
	s.Bshow();
	s.Ashow();
	cout<<"In main function\n";
		//cout<<" a="<<s1.a;
		//cout<<" b="<<s1.b;
		//cout<<" c="<<s1.c;
		//cout<<" d="<<s1.d;
		//cout<<" e="<<s1.e;
		//cout<<" f="<<s1.f<<endl;	
}

