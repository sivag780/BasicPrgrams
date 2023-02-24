#include <stdio.h>

int main()
{
    int a[10];
    int n, index, new_element;

    printf("Enter Number of elements : ");
    scanf("%d",&n);


    for(int i=0;i<n;i++)
    {
         printf("Enter Number %d : ",i+1);
         scanf("%d",&a[i]);
    }



    // print the original array
    printf("Original array: ");
    for (int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }

    /* // shift elements to the right
    for (int i=n-1;i>index;i--)
    {
        arr[i]=arr[i-1];
    } */




    printf("\nEnter index : ");
    scanf("%d",&index);

    printf("Enter new element : ");
    scanf("%d",&new_element);

    // insert the new element
    a[index] = new_element;

    // print the updated array
    printf("\nUpdated array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
