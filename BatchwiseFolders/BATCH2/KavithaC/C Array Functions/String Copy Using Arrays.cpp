#include<stdio.h>

int main()
{
    char a[]="Hello!Good morning";
    char b[20];

    int i=0;
    while(a[i]!='\0')
    {
        b[i]=a[i];
        i++;
    }
    b[i++]='\0';

    printf("Copied String : %s \n",b);

    return 0;
}



