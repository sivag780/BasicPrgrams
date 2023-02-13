//OVERLOADED CONSTRUCTORS
//rules
/*1.by no. of parameter
2.by order of parameter
3.by type of parameter*/

#include<iostream>
using namespace std;
class A
{
public:
	int b;
	A(int b)
	{
		cout<<"the value of b:"<<b<<endl;
	}
    A(int b,int c)//overloaded contructor
	{
		cout<<"the value of b:"<<b<<"\nvalue of c:"<<c<<endl;
	}
	 A(int e,float d)
	{
		cout<<"the value of b:"<<e<<"\nvalue of c:"<<d<<endl;
	}
	  A(char q,float p)
	{
		cout<<"the value of q:"<<q<<"\nvalue of p:"<<p<<endl;
	}
};
int main()
{
A S(50);
A T('A',55.2);
A E(40,40);
A D(500,55.55f);
}
