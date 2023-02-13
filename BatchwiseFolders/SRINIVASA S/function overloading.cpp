#include<iostream>
#include<string>
using namespace std;

class emp
{
	int id;
	char  name[30];
	float sal;
public:
	void init(int x)
	{
		id=x;
		strcpy(name,"null");
		sal=0;
	}
	
	void init(int x,char y[])
	{
		id=x;
		strcpy(name,y);
		sal=0;
	}

	void init(int x,float y,char z[])
	{
		id=x;
		strcpy(name,z);
		sal=y;
	}

	void init(int x,char y[],float z)
	{
		id=x;
		strcpy(name,y);
		sal=z;
	}

	void display()
	{
		cout<<"emp id="<<id<<"\nemp name="<<name<<"\nemp salary="<<sal<<endl;
	}
};

int main()
{
	emp A,B;
	A.init(40,80000.0,"Sri S");
	A.display();
	B.init(5);
	B.display();
}