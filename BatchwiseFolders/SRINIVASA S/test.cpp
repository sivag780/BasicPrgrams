#include<iostream>
#include<string.h>

using namespace std;

class candidate
{
	public:
	char name[30];
	long long int mobile;
	float salary;

	candidate()
	{
		char a[10]="no name";
		strcpy(name,a);
		mobile=1111111111;
		salary=0.0;
	}

	void insert(char a[],long long int b,float c)
	{
		strcpy(name,a);
		mobile=b;
		salary=c;
	}

	void show()
	{
		cout<<"NAME : "<<name<<endl;
		cout<<"MOBILE : "<<mobile<<endl;
		cout<<"SALARY : "<<salary<<endl;

	}
};

void main()
{
	candidate A;
	A.insert("srinivasa",7892848719,80000);
	A.show();
	cout<<sizeof(A.mobile)<<endl;
}