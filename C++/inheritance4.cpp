//Hierarchical Inheritance

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
	}
};

class C: public A 
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
	B s2;
	C s3;
	s3.Cshow();
	s2.Bshow();
	s3.Ashow();
	cout<<"In main function\n";
		
}

