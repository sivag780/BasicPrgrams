#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
public:
	A()
	{
		x=10;
		y=20;
	}
	void disp()
	{
		cout<<"value of x:"<<x<<endl;
		cout<<"value of y:"<<y<<endl;
	}
	void* operator new(size_t size)
	{
		void* p=(void*)malloc(sizeof(A));
		cout<<"Hello welcome"<<endl;
		return p;
	}
	void operator delete(void* p)
	{
		delete(p);
		cout<<"Good bye"<<endl;
	}


};
int main()
{
	A* pobj=new A;
	pobj->disp();
	delete(pobj);
}
