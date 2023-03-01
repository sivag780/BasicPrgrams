#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
#define EMPTY -1
void insert(int);
int Del();
void disp();
int Q[SIZE];
int F=EMPTY;
int r=0;
int count =0;
enum{INSERT=1,DEL,DISP,EXIT};
int main()
{
	/*insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	disp();*/
	while(1)
	{
		int choice;
		printf("ENTER CHOICE\n");
		printf("1-INSERT,2-DEL,3-DISP,4-EXIT\n");
		scanf_s("%d",&choice);
		switch(choice)
		{
		case INSERT:
			{
				int item;
				printf("enter the item\n");
				scanf_s("%d",&item);
				insert(item);
			}
			break;
		case DEL:
			{
				int del;
				del=Del();
				printf("Deleted item is %d\n",del);
			}
			break;
		case DISP:
			{
				disp();
			}
			break;
		case EXIT:
			{
				exit(0);
			}
			break;
		}
	}
}
void insert(int item)
{
	if(count==SIZE)
	{
		printf("Q is full\n");
	}
	else
	{
		F=	F+1%SIZE;
		Q[F]=item;
		count++;
	}
}
int Del()
{
	int del=0;
	if(count==0)
	{
		printf("Q is empty\n");
	}
	else
	{
		del=Q[r];
		r=	r+1%SIZE;
		count--;
	}
	return del;
}
void disp()
{
	int j;
	if(count==0)
	{
		printf("Q is empty\n");
	}
	else
	{
		int i=r;
		for(j=0;j<count;j++,i=i+1%SIZE)
		{
			printf("%d\n",Q[i]);
		}
	}
}