#include<stdio.h>

int add(int,int);
int sub(int,int);
int mul(int,int);
float div(float,float);
int sq(int);
void main()
{
	int a,b,c,d,e,g;
	float m,n,f;
	a=30;
	b=6;
	m=30;
	n=6;

	c = add(a,'A');
	d = sub(a,b);
	e = mul(a,b);
	f = div(m,n);
	g = add(sq(a),sq(b)); //sum of squares
	printf("%d\n%d\n%d\n%f\n%d\n",c,d,e,f,g);
}

int sq(int x)
{	int y;
	y = x*x;
	return y;
}

int add(int x, int y)
{
	int r;
	r=x+y;
	return r;
}

int sub(int x,int y)
{
	return x-y;
}

int mul(int x,int y)
{
	return x*y;
}

float div(float x,float y)
{
	float z;
	z=x/y;
	return z;
}
