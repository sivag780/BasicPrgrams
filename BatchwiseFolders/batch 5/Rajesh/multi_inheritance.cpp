//multi level inheritance 
#include <iostream>
using namespace std;
class add
{public:
	int a,b,c;

	add()
	{
	a=100;
	b=200;
	c=a+b;
	}
	void add_dis ()
	{
	//a=s;
	//b=g;
	c=a+b;
	cout<<"sum of a+b= "<<c<<endl;
	}
};
class multi:public add
{public:
int m,mul;

	multi()
	{
		
	m=1;
   	mul=a*b*m;
	}
void multi_dis()
{
cout<<"multiply of a*b*m= "<<mul<<endl;
}
};
class sub:public multi
{ public:
	int n,subs;

	sub()
	{
	n=1000;
	subs=(a*b*m-n);
	}
	void sub_dis()
	{
	cout<<"substration of (a*b*m-n)= "<<subs<<endl;
	}

};
int main ()
{
sub S1;
S1.sub_dis();
S1.multi_dis();
S1.add_dis();
multi m1;
m1.multi_dis();
}


