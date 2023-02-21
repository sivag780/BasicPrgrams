#include<stdio.h>

int main()
{
    int n, a[10], temp;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
        printf("Enter Number %d : ",i+1);
        scanf("%d", &a[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Second Largest Number : %d \n", a[1]);
    printf("Third Largest Number : %d \n", a[2]);


    return 0;
}
