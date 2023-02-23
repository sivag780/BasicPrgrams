/*#include<iostream>

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
}*/

#include<iostream>
#include<string>

using namespace std;

class candidate
{
	public:
	char name[30];
	long long int mobile;
	float salary;

	candidate()
	{
		char a[10]="no name";
		strcpy(name,a);
		mobile=1111111111;
		salary=0.0;
	}

	void insert(char a[],long long int b,float c)
	{
		strcpy(name,a);
		mobile=b;
		salary=c;
	}

	void show()
	{
		cout<<"NAME : "<<name<<endl;
		cout<<"MOBILE : "<<mobile<<endl;
		cout<<"SALARY : "<<salary<<endl;

	}
};

void main()
{
	candidate A;
	A.insert("srinivasa",7892848719,80000);
	A.show();
	cout<<sizeof(A.name)<<endl;
}