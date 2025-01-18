//Hybrid Inheritance

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

class C: public B 
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

class D: public B 
{
	private:
	int j=10;
	protected:
	int k=11;
	public:
	int l=12;
	void Dshow()
	{
		cout<<"In Dshow function\n";
	}
};

int main()
{
	C s3;
	D s4;
	s4.Dshow();
	s3.Cshow();
	s3.Bshow();
	s3.Ashow();
	cout<<"In main function\n";
		
}

