#include<stdio.h>

int main()
{
    int n, a[10];

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
            // To Find Duplicates in an Array
            if(a[i]==a[j])
            {
                printf("%d \n",a[i]);
            }
        }
    }

    return 0;
}

