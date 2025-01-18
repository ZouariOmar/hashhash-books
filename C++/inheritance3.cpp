//Multiple Inheritance

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

class B 
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
	}
};

class C: public A, public B 
{
	private:
	int g=7;
	protected:
	int h=8;
	public:
	int i=9;
	void Cshow()
	{
		cout<<"In Cshow function\n";
	}
};

int main()
{
	C s;
	s.Cshow();
	s.Bshow();
	s.Ashow();
	cout<<"In main function\n";
		
}

