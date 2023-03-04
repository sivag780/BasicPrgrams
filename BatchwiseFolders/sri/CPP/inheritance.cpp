#include<iostream>

using namespace std;

class A
{
protected:
	int a;
	char b;
public:
	A()
	{
		a=0;
		b='a';
	}
	A(int a,int b)
	{
		a=a;
		b=b;
	}
	~A()
	{
		cout<<"A class object deleted"<<endl;
	}
	void insert_data(int x,char y)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	}
};

class B : public A
{
public:
	float c;

	B(float a=0)
	{
		c=a;
	}
	~B(){cout<<"B object destroyed"<<endl;}

	void init(float x)
	{
		c=x;
	}
	void show(){cout<<"a = "<<a<<endl<<"b = "<<b<<"\nc = "<<c<<endl;}
};

class C:public B
{
protected:
	char d;
	int e;
	char f;
public:
	C(int x=0,char y='a')
	{
		e=x;
		f=y;		
	}

	~C(){cout<<"C object destroyed"<<endl;}

	void initialize(char x,int y,char z)
	{
		d=x;
		e=y;
		f=z;
	}

	void display()
	{
		cout<<"a = "<<a<<endl<<"b = "<<b<<"\nc = "<<c<<"\nd = "<<d<<endl;
		cout<<"e = "<<e<<"\nf = "<<f<<endl;
	}
};

class D:public A
{
private:
	int g;
	~D(){cout<<"D object destroyed"<<endl;}

	D(int x) : A(x,x)
	{
		g=x;
	}
	
	void init(int d)
	{
		g=d;
	}
	void show()
	{
	cout<<"a = "<<a<<endl<<"b = "<<b<<"g = "<<g<<endl;
	}

};

void main()
{
	C c;
	c.show();
	c.display();
	c.insert_data(1,'a');
	c.init(2.0);
	c.initialize('b',3,'c');
	c.display();
}