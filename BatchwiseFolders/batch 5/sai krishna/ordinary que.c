#include<stdio.h>
#include<stdlib.h>
//using namespace std;
#define SIZE 5
#define EMPTY -1
void insert(int);
int Del();
void disp();
int Q[SIZE];
int F=EMPTY;
int r=0;
enum{INSERT=1,DEL,DISP,EXIT};

int main()
{
	while(1)
	{
		int choice;
		printf("ENTER THE CHOICE\n");
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
				int del=0;
				del=Del();
				printf("deleted item %d\n",del);

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
		default:
			{
				printf("enter invalid");
			}
			break;
		}
	}
	return 0;
}
void insert(int item)
{
	if(F==SIZE-1)
	{
		printf("Q is full\n");
	}
	else
	{
		F++;
		Q[F]=item;
	}
}
int Del()
{
	int del=0;
	if((F==EMPTY)&&(r==0))
	{
		printf("Q is empty\n");
	}
	else
	{
		del=Q[r];
		r++;
		if(r>F)
		{
			r=0;
			F=EMPTY;
		}
	}
	return del;
}
void disp()
{
	if((F==EMPTY)&&(r==0))
	{
		printf("Q is empty\n");
	}
	else
	{
		int i;
		for(i=r;i<=F;i++)
			printf("%d\n",Q[i]);
	}
}

