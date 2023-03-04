//structure assigning

#include<stdio.h>

//creating struct account datatype
struct account
{
	char initial;	//arranging datamembers orderly to avoid padding
	char type;
	short int id;
	float balance;
	float loan;
	
};
//declaring the function to initialize the values
struct account init(char,char,short int,float,float);

//declaring the function to print the values
void printstruct(struct account);

void main()
{
	struct account A,B,C,D,E; //creating struct account variables

	A = init('A','S',12,5000,2000); //initializing
	printstruct(A);		//printing
	
	B = init('B','C',01,12540,500);
	printstruct(B);
	
	C = init('E','S',02,8450,47802);
	D = init('F','S',03,1250,4567);
	E = init('G','C',04,4000,7000);

	printstruct(C);
	printstruct(D);
	printstruct(E);
}



struct account init(char a,char b,short int c,float d,float e)
{
	struct account X;
	X.initial = a;
	X.type = b;
	X.id = c;
	X.balance=d;
	X.loan=e;
	return X;
}

void printstruct(struct account Y)
{
	printf("Initial = %c\ntype = %c\nid = %d\nbalance = %f\nloan = %f\n\n",Y.initial,Y.type,Y.id,Y.balance,Y.loan);

}