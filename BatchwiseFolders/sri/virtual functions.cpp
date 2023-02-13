#include<iostream>

using namespace std;

class shape
{
protected:
	int length;
	int width;

public:

	shape(int x=0,int y=0)
	{
		length=x;
		width=y;
	}

	virtual void area()=0;

	void display()
	{cout<<"length = "<<length<<"\nwidth = "<<width<<endl;}
};

class rectangle : public shape
{
public:
	rectangle():shape(){}
	rectangle(int x,int y)
	{
		length=x;
		width=y;
	}
	void area()
	{
		int area;
		area=length*width;
		cout<<"area of rectangle is : "<<area<<endl;
	}
	
};

class square : public shape
{
public:
	square():shape(){}
	square(int x)
	{
		length=x;
		width=x;
	}
	void area()
	{
		int area;
		area=length*width;
		cout<<"area of square is : "<<area<<endl;
	}
	
};

int main()
{
	shape *SHAPE;
	rectangle R(10,20);
	SHAPE=&R;
	SHAPE->area();
	return 0;
}