#include<iostream>
using namespace std;

class A
{
public:
	int a;
	void fun()
	{
		cout<<"function called"<<endl;
	}
};
	class B : public A
	{
	public:
		void display()
		{
			fun();
		}
	};

	void main()
	{
		B obj;
		obj.display();
		
	}