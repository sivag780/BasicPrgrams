#include "stdafx.h"
#include <iostream>

using namespace std;
class A
{
public:
	template<typename T>
	T add(T a, T b)
	{
	T c;
	c=a+b;
	return c;
	}
	template <typename S,typename M>
	
	M add(S a, M b)
	{
	M c;
	c=a+b;
	return c;
	}
	template<typename D>
	D sub(D x, D y)
	{
	D z;
	z=y-x;
	return z;
	}
	
};

int main()
{
A obj2;
int x=obj2.add<int>(10,20);
float y=obj2.add<float>(18.7f,7.6f);
char z=obj2.add<char>('A','B');
int q=obj2.add<int,int>(18,25);
cout<<x<<" "<<y<<" "<<z<<" "<<q<<endl;
int w=obj2.sub<int>(7,25);
cout<<w<<endl;
}