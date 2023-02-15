#include<iostream>
using namespace std;

class Add
{
public:

	int add(int a , int b)
	{
		a+b;
		cout<< a+b<<'\n';
	}
	int add (int a,int b,int c)
	{
		a+b+c;
		cout<<a+b+c;
	}
	
};
int main()
{
	Add obj;
	obj.add(10,12);
	obj.add(2,3,6);

}