#include<iostream>

using namespace std;

class A
{
	int a,b;

public:

	A()
	{
		cout<<"ctor called\n";
		a=10;
		b=20;
	}

	~A()
	{
		cout<<"alirgjbk"<<endl;
	}

	void* operator new (size_t size)
	{
		void *p = ::operator new(size);
		cout<<"Memory allocated"<<endl;
		return p;
	}

	void operator delete (void *p)
	{
		::operator delete(p);
		cout<<"Memory de-allocated"<<endl;

	}

};

void main()
{
	A *p = new A;
	delete(p);
}