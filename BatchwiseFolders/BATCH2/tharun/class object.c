#include "stdafx.h"
#include <iostream>

using namespace std;
class A
{
	int a;
	char s;
public:
	void initdata(int b, char z)
	{
		a=b;
		s=z;
	}
	void display ()
	{
		cout<<"integer"<<a<<endl;
		cout<<"char"<<s<<endl;
	}
};

int main()
{
	A obj ;                 
	obj.initdata(1,'s');  

	obj.display();
}
