#include<iostream>

using namespace std;

class A
{
	int x;
	int y;

protected:
	void init(int a, int b)
	{
		x=a;
		y=b;
	}

public:
	A()
	{
		x=10;
		y=20;
	}
void display()
	{
		cout<<"x value  is:"<<x<<endl;
		cout<<"y value  is:"<<y<<endl;
	}
	friend void check();
	friend int main();
};
void check()
{
	A obj;
	obj.x=1;
	obj.y=2;
	obj.display();
	obj.init(3,4);
	obj.display();
}
int main()
{
	A obj1;
	obj1.x=10;
	obj1.y=20;
	obj1.display();
	check();
}
