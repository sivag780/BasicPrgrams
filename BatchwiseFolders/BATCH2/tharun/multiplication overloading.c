#include"stdafx.h"			
#include <iostream>
using namespace std;
                                
class M
{
public:
	int a,b;
	M()
	{
	cout<<"M Ctor"<<endl;
	}
	void show()
	{
	cout<<"mul of a 5*7= "<<a<<endl;
	cout<<"mul of b 6*9= "<<b<<endl;
	}
	M operator *(M multi)
	{ M mul;
	mul.a= a* multi.a;
	mul.b= b* multi.b;
	return mul;
	}
};
int main()
{
M obj1;
obj1.a=5;
obj1.b=6;
M obj2;
obj2.a=7;
obj2.b=9;
M obj3=obj1*obj2;
obj3.show();
}

