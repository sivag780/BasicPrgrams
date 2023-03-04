#include<stdio.h>
void main()
/*{
int a[2][3]={{6,5,4},{9,8,7}},i,j,sum=0;
printf("matrix is: \n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
sum=sum+a[i][j];
}
printf("\n");
}
printf("sum is %d\n",sum);
}

// transpose of a matrix
{
int a[2][3]={{1,2,3},{4,5,6}},i,j;
printf("matrix is: \n");
for(i=0;i<3;i++)			//i<3
{
for(j=0;j<2;j++)		//j<2
{
printf("%d\t",a[j][i]);
}
printf("\n");
}
}




{
int a[2][3]={{6,5,4},{9,8,7}},i,j,b[3][2];
printf("matrix of a is: \n");	
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("transpose matrix of a is: \n");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",a[j][i]);
}
printf("\n");
}
printf("matrix of b is: \n");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
b[j][i]=a[j][i];
printf("%d\t",b[j][i]);
}
printf("\n");
}
}
/*
// sum of the row and column
{
int a[3][3]={{3,2,1},{-1,6,-8},{6,7,-2}},i,j,sumrow,sumcol;
printf("matrix is\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
sumrow=0,sumcol=0;
for(j=0;j<3;j++)
{
sumrow=sumrow+a[i][j];
sumcol=sumcol+a[j][i];
}
printf("sr is = %d, sc is = %d\n",sumrow,sumcol);
}
}



// sum of two matrix
{
int a[2][3]={{1,2,3},{1,0,1}},i,j;
int b[2][3]={{1,1,1},{1,1,1}},k,l;
int c[2][3];
printf("martix of a is\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("martix of b is\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
printf("\n sum of the matrix of a and b is \n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d\t",c[i][j]);
}
printf("\n");
}
}*/

// multiple the two matrix
{
	int a[3][3]={{1,3,-1},{-5,6,8},{5,4,9}};
	int b[3][3]={{2,3,6},{1,3,2}};
	int c[3][3],i,j,k,sum;
	for(i=0;i<3;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				sum=sum+(a[i][k]*b[k][j]);
				c[i][j]=sum;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
	printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}