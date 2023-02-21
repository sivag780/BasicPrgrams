#include<iostream>
using namespace std;
/*class A
{
public:
	int a;
	void fun()
	{
		cout<<"fun"<<endl;
	}
};
class B: public A
{
public:
	void displayA()
	{
		cout<<"displaya"<<"fun"<<endl;
		fun();
	}
};
int main()
{
	B obj;
	obj.displayA();
}*/

//INHERITANCE WITH CONSTRUCTORS
/*class parent
{
public:
	int a,b,c;
	parent()//ctor
	{
		a=10;
		b=20;
		c=a+b;
	}
	void eye()
	{
		cout<<"parent class eyes"<<endl;
	}
};
class child: public parent
{
public:
	void display()
	{
		cout<<"class parent variable"<<c<<endl;
		
	}
	void face()
	{
		cout<<"child face"<<endl;
		eye();
	}
};
int main()
{
	child obj;
	obj.face();
	obj.display();
}*/
/*class a
{
public:
	int x,y,z;
	a()
	{
		
		x=100;
		y=200;
		z=x+y;
	}
	void fun()
	{
		cout<<"ctor"<<endl;
	}
};
class b: public a
{
public:
	void ctor()
	{
		cout<<"ctor called"<<endl;
	}
	void disp()
	{
		cout<<"disp"<<"ctor"<<z<<endl;
		fun();
	}
};
int main()
{
b k;
k.disp();
}*/

//OVERLOAD CTOR
/*class A
{
public:
 A(int a)
{
	cout<<"ctor 1 called"<<endl;
}
 A(int a,int b)
{
	int x;
	x=10;
	cout<<"ctor 2 called"<<x<<endl;
}
};
void main()
{
	A obj(2);
	A obj1(1,2);
	
}*/
/*class A
{
public:
	char name;
	int id;
	int roll;
	float fee,sal,rps;
	A (char n)
	{
		name=n;
		cout<<"name"<<name<<endl;
	}
	A (int a)
	{
		id=a;
		cout<<"id "<<id<<endl;
	}
};
int main()
{
	A OBJ1('K');
	A OBJ2(2);
}*/

//modes of inhetitance

/*class base
{
public:
	int a;
private:
	int b;
protected:
	int c;
};
class derived:public base
{
public:
	void changebasedata()
	{
		a=10;
		//b=20;
		c=30;
		cout<<"a="<<a<<endl;
		//cout<<"b="<<b<<endl;
		cout<<"c="<<c<<endl;
	}
};
int main()
{
	derived obj;
	obj.changebasedata();
    
}*/
/*class base
{
public:
	int a;
private:
	int b;
protected:
	int c;
};
class derived:private base   //it is private so base-private members can not be access in derived
{
public:
	void changebasedata()
	{
		a=10;
		//b=20;
		c=30;
		cout<<"a="<<a<<endl;
		//cout<<"b="<<b<<endl;
		cout<<"c="<<c<<endl;
	}
};
int main()
{

	derived obj;
	obj.changebasedata();
	
}*/
class base
{
public:
	int a;
private:
	int b;
protected:
	int c;
};
class derived:protected base
{
public:
	void changedatabase()
	{
		a=10;
		//b=20;
		c=30;
		cout<<"a="<<a<<endl;
		//cout<<"b="<<b<<endl;
		cout<<"c="<<c<<endl;
	}
};
int main()
{
	derived obj;
	obj.changedatabase();
}





		
