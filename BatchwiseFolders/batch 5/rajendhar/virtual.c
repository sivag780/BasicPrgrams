#include<iostream>
using namespace std;

class a
{
protected:
	int x;
	virtual void display()
	{
		cout<<"inside class base"<<endl;
	}
};
class b : public a
{
public:
	void display()
	{
	cout<<"inside class derived"<<endl;
	}
};
int main()
{
	a *ptr;
	b object;
	ptr = &object;
	ptr->display();


}
/*
class base
{
public:
	base()
	{
		cout<<"base c tor"<<endl;
	}
	~base()
	{
		cout<<"base d tor"<<endl;
	}
};
class derived : public base
{
public:
	derived()
	{
		cout<<"derived c tor"<<endl;
	}
	~derived()
	{
		cout<<"derived d tor"<<endl;
	}
};
int main()
{
	base *ptr;
	derived object;
	ptr = &object;
}*/
#include<iostream>
using namespace std;
class shape
{
protected:
	int height , width;
public:
	void set_values (int x, int y)
	{
		width = x;
		height = y;
	}
	virtual int area()
	{
		return 0;
	}
};
class rectangle: public shape
{
public:
	int area()
	{
		return width*height;
	}
};
class triangle : public shape
{
public:
	int area()
	{
		return(width*height/2);
	}
};
class circle : public shape
{
public:
int area()
{
    return 0;
}
};

int main()
{
	rectangle rect;
 	triangle tri;
//	shape shape_object;

	shape * shape_ptr = & rect;
	shape_ptr->set_values (10,20);
	cout<<"area of triangle is: "<<shape_ptr->area();
	
	//shape obj;
	shape* ptr = &tri;
	ptr->set_values (10 , 10);
	cout<<"area of tri is : "<<ptr->area();


	
}