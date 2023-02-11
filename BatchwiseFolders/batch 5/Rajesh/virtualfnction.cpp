//POLYMORPHISM WITH VIRTUAL FUNCTION 
#include<iostream>
using namespace std;
class shape
{
public:
	int length,width;
	void shape_values(int x,int y )
	{
	length=x;
	width=y;	
	}
	virtual int area()
		//MAKING THE FUNCTION TO VIRTUAL
	{
	return 0;
	}
};

class rectangle:public shape
	//INHERITED FROM THE BASE  CLASS 
{ 
public:

int area()
//THE OVRRIDDEN FUNCTION IS UPDATED WITH DIFF STATEMENT
	{
	return length*width;
	}
};
class triangle:public shape
{
public:
int area()
	{
	return (length*width)/2;
	}

};
int main ()
{
shape *sptr; //pointer is create for base class
rectangle R1;//object is created rectangle
triangle t1; //triangle object
sptr=&R1;//
sptr->shape_values(101,200);
cout<<"area of rectangle="<<sptr->area()<<endl;

sptr=&t1;
sptr->shape_values(500,10);
cout<<"area of triangle:"<<sptr->area()<<endl;
}
