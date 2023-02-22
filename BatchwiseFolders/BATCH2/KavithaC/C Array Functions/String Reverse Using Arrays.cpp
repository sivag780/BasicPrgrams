#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,temp;

	char a[]="Hello!GoodMorning";
	for(i=0,j=strlen(a)-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}

	printf("Reversed String : %s\n",a);
	return 0;
}

