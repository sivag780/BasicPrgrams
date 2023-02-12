#include<iostream>
using namespace std;

class A
{
public:
	void fun()
	{
		cout<<"im in class A "<<endl;
	}
};

class B : virtual public A
{
public:
	void fun()
	{
		cout<<"im in class B "<<endl;
	}
};

class C : virtual public A
{
public:
	void fun()
	{
		cout<<"im in class C "<<endl;
	}
};

class D : public B, public C
{
public:
	void fun()
	{
		cout<<"im in class D "<<endl;
	}
};

void main()
{
	A *ptr;
	D obj;
	ptr = &obj;
	ptr->fun();
}
