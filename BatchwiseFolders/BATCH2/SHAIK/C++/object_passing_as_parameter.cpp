
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
		cout<<"X value is:"<<x<<endl;
		cout<<"Y value is:"<<y<<endl;
	}
	void init(int a,int b)
	{
		x=a;
		y=b;
	}
};
A check(A tobj)
{
	tobj.init(50,60);
	return tobj;
}


int main()
{
	A obj;
	obj.disp();
	A obj1;
	obj1.init(30,40);
	obj1.disp();
    A obj2=check(obj);
	obj2.disp();

}
