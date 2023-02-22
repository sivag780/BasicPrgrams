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
            // Ascending Order of an Array elements
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
        printf("a[%d]:%d \n", i,a[i]);
    }

    return 0;
}

