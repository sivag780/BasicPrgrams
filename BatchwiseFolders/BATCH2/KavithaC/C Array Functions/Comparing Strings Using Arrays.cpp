#include<stdio.h>

int main()
{
    int i=0;

	char a[]="Hello";
	char b[]="Hello";

	while((a[i]==b[i])&&a[i]!='\0')
	{
	    i++;
	}
	return (((a[i]-b[i])!=0)?1:0);
}


