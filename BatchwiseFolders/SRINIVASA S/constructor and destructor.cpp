#include<iostream>

using namespace std;

class A
{
protected:
	int a;
	char b;

public:
	A():a(0),b('z'){}
	A(int x,char y):a(x),b(y){}
	A(A &obj)
	{
		a=obj.a*obj.b;
		b=obj.a+obj.b;
	}

	void display()
	{	
		cout<<"a ="<<a<<"\tb ="<<b<<endl;
	}

	~A()
	{
		cout<<a<<" class A destructor"<<endl;
	}

};

class B : public A
{
	float c;
public:
	B():A(),c(0){}
	B(int x, char y, float z)
	{
		a=x;
		b=y;
		c=z;
	}

	void display()
	{	
		cout<<"a ="<<a<<"\tb ="<<b<<"\tc ="<<c<<endl;
	}

	~B(){cout<<a<<" class B destructor"<<endl;}
};

int main()
{
	A obj,obj1(1,'a');
	A obj3=obj1;
	obj.display();
	obj1.display();
	obj3.display();
	B item1,item2(5,'t',500.0);
	item1.display();
	item2.display();
	return 0;
}


