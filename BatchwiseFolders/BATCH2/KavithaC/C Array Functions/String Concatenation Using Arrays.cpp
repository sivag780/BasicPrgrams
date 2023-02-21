#include<stdio.h>

int main()
{
    char a[20]="Hello!";
    char b[]="Good Morning";

    int i=0,j=0;
    while(a[i]!='\0')
    {
        i++;
    }
    while(b[j]!='\0')
    {
        a[i]=b[j];
        i++;
        j++;
    }
    a[i++]='\0';

    printf("String After Concatenation : %s \n",a);

    return 0;
}




