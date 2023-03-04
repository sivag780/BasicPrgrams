#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
#define EMPTY -1
void insert(int);
int Del();
void disp();
void insert_R(int);
int Q[SIZE];
int F=EMPTY;
int r=0;
enum{INSERT=1,DEL,INSERT_R,DISP,EXIT};
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
		printf("1-INSERT,2-DEL,3-INSERT_R,4-DISP,5-EXIT\n");
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
		case INSERT_R:
			{
				int item;
				printf("enter insert_R\n");
				scanf_s("%d\n",&item);
				insert_R(item);
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
void insert_R(int item)
{
	if(r!=0)
	{
		r--;
		Q[r]=item;
	}
	else
	{
		printf("no space is rare end\n");
	}
}
void disp()
{
	int i;
	if((F==EMPTY)&&(r==0))
	{
		printf("Q is empty\n");
	}
	else

		for(i=r;i<=F;i++)
		{
			printf("%d\n",Q[i]);
		}
}


