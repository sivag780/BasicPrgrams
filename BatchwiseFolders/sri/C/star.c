#include<stdio.h>
void main()
{
	/*
	//for right angle triangle
	int i,j,n;
	n=10;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			//printf("* "); // for stars
			printf("%d ",j); // for numbers
		}
		printf("\n");
	}*/
	

	/*//inverted right angle triangle
	int i,j,n,k,m;
	n=10;
	m=n;
	for(i=n;i>=0;i--)
	{
		for(j=i;j>=0;j--)
		{
			printf("* ");
			//printf("%d ",j); // for numbers
		}
		printf("\n");
	}*/
	

	
	
	
	//for isoscelos triangle
	int i,j,n,k,m;
	n=10;
	m=n;
	for(i=0;i<n;i++)
	{
		for(k=m;k>=0;k--)
		{
			printf(" ");
		}
		m--;		
		for(j=0;j<=i;j++)
		{
			printf("* ");
			//printf("%d ",j); // for numbers
		}
		printf("\n");
	}
	printf("\n");
	
}