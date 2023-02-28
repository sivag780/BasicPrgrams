#include<stdio.h>
#include<stdlib.h>
//using namespace std;
#define SIZE 5
#define EMPTY -1
int Q[SIZE];
int F=EMPTY;
int R=0;
void Insert(int);
int Delete();
void display();
enum Que{INSERT=1,DELETE,DISPLAY,EXIT};
int main()
{
	while(1)
	{
		int choice;
		printf("Enter the choice : \n");
		printf("1-INSERT,2-DELETE,3-DISPLAY,4-EXIT\n");
		scanf_s("%d",&choice);

		switch(choice)
		{
		case INSERT:
			{
				int item;
				printf("Enter the item\n");
				scanf_s("%d",&item);
				Insert(item);
			}
			break;
		case DELETE:
			{
				int del=0;
				del=Delete();
				printf("Deleted item is %d\n",del);
			}
			break;
		case DISPLAY:
			{
				display();
			}
			break;
		case EXIT:
			{
				exit(0);
			}
			break;
		default:
			{
				printf("INVALID CHOICE\n");
			}
			break;
		}
	}
	return 0;
}
void Insert(int item)
{
	if(F==SIZE-1)
	{
		printf("QUE is full");
	}
	else
	{
		F++;
		Q[F]=item;
	}
}
int Delete()
{
	int del=0;
	if((F==EMPTY)&&(R==0))
	{
		printf("QUE is empty");
	}
	else
	{
		del=Q[R];
		R++;
		if(R>F)
		{
			R=0;
			F=EMPTY;
		}
		
	}
	return del;
}
void display()
{
	if((F==EMPTY)&&(R=0))
	{
		printf("QUE is empty");
	}
	else
	{
		for(int i=R;i<=F;i++)
		{
			printf("%d\n",Q[i]);
		}
	}
}
