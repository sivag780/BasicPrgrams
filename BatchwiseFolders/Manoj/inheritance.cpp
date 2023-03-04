#include<iostream>
using namespace std;
/*class parent
{
public:
int a;
int b;
int c;
};
class child:public parent  //inheritance : private with  in a class  &   protected b/w the classes    
{							//public can access in main also
public:
void fun()
{
a=55;
b=20;
c=30;
cout<<"a is "<<a<<endl;
cout<<"b is "<<b<<endl;
cout<<"c is "<<c<<endl;
}
};

int main()
{
child object;
object.fun();
}*/



class base
{
public:
	base()
	{
		cout<<"base ctor called"<<endl;
	}
};
class kiran: public base
{
public:
	kiran()
	{
		cout<<"kiran ctor called"<<endl;
	}
};
class mreddy: public base, kiran
{
public:
	mreddy()
	{
		cout<<"mreddy ctor called"<<endl;
	}
};
class hoodibaba: public mreddy
{
public:
	hoodibaba()
	{
		cout<<"hoodibaba ctor called"<<endl;
	}
};
class actor_sri: public base
{
public:
	actor_sri()
	{
	cout<<"jamaliguda ctor called"<<endl;
	}
};
int main()
{
	hoodibaba bambam;
	actor_sri jamaliguda;
}
