#include<stdio.h>

struct emp
{
	int id;
	char name[30];
	float sal;
	struct
	{
		int d;
		int m;
		int y;
	}DOB;
};

void display(struct emp A);
struct emp init(int,char[],float,int,int,int);

void main()
{
	struct emp EMP,EMP1={10,"nivas",100,{10,12,1996}};
	EMP=init(5,"sri",50.05,31,12,2019);
	display(EMP);
	display(EMP1);

}


struct emp init(int x,char y[],float z,int d,int m,int year)
{
	struct emp X;
	X.id=x;
	strcpy(X.name,y);
	X.sal=z;
	X.DOB.d=d;
	X.DOB.m=m;
	X.DOB.y=year;
	
	return X;
}

void display(struct emp A)
{
	printf("id = %d\nname = %s\nsalary = %f\ndob=%d/%d/%d",A.id,A.name,A.sal,A.DOB);
}