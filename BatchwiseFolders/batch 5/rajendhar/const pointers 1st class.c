#include<iostream>
using namespace std;

int main()
{
	
/*int x=10,y=20;
int* ptr=&x;

*ptr=30;
cout<<x ;
ptr=&y; 
cout<<*ptr ;
*/
	/*
	// address const
int x=10,y=20;
int*const ptr=&x;

*ptr=30;
cout<<x ;
//ptr=&y; //'ptr' : you cannot assign to a variable that is const
cout<<*ptr<<endl;

cout<< &ptr ;
}*/
/*
// pointer const
int x=10,y=20;
const int*const ptr=&x;

//*ptr=30; //'ptr' : you cannot assign to a variable that is const
cout<<x ;
//ptr=&y; //'ptr' : you cannot assign to a variable that is const
cout<<*ptr<<endl;

cout<< &ptr ;
}
*/
/*	
char *str="HELLO";
char a[]="bolo";
int size;

size=sizeof(*str);
size=sizeof(a);
//*str="z"; //error C2440: '=' : cannot convert from 'const char [2]' to 'char'
 str=a;
}*/
 char *const str="HELLO";
char a[]="bolo";
int size;

size=sizeof(*str);
size=sizeof(a);
//*str="z"; //error C2440: '=' : cannot convert from 'const char [2]' to 'char'
 // str=a; //'str' : you cannot assign to a variable that is const
}