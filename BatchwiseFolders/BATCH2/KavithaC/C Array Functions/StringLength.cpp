#include<stdio.h>

int main()
{
    char a[20]="Hello!GM";
    int i=0;

    while(a[i]!='\0')
    {
        i++;
    }
    printf("Lenth of the String : %d\n",i);

    return 0;
}


