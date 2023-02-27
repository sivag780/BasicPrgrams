#include<stdio.h>
#include<stdlib.h>
//#include<iostream>
//using namespace std;

#define SIZE 5
#define EMPTY -1
int S[SIZE];
int top=EMPTY;
void push(int);
int pop();
void disp();
enum stack{PUSH=1,POP,DISPLAY,EXIT};

int main()
{
	while(1)
	{
		int choice;
		printf("Enter the choice\n");
		printf("1-PUSH,2-POP,3-DISPLAY,4-EXIT\n");
		scanf("%d",&choice);

		switch (choice)
		{
		case PUSH:
			{
				int item;
				printf("Enter the item\n");
				scanf("%d",&item);
				push(item);
			}
			break;
		case POP:
			{
				int del=0;
				del=pop();
				printf("Deleted item is-%d\n",del);
			}
			break;
		case DISPLAY:
			{
				disp();
			}
			break;
		case EXIT:
			{
				exit (0);
			}
			break;
		default:
			{
				printf("Invalid choice");
			}
			break;
		}
	}
	return 0;
}
void push(int item)
{
	if (top==SIZE-1)
	{
		printf("stack is full\n");
	}
	else
	{
		top++;
		S[top]=item;
	}
}
int pop()
{
	int del=0;
	if(top==EMPTY)
	{
		printf("stack is empty\n");
	}
	else
	{
		del=S[top];
		top--;
	}
	return del;
}
void disp()
{
	if(top==EMPTY)
	{
		printf("stack is empty\n");
	}
	else
	{
		int i;
		printf("stack items are\n");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",S[i]);
		}
	}
}

