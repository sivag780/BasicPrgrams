#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
#define EMPTY -1

int s[SIZE];
int top = EMPTY;

void push(int);
int pop();
void display();

enum STACK {PUSH=1,POP,DISPLAY,EXIT};

int main()
{
	int choice,item,del;

	while(1)
	{
		printf("\aEnter your choice\n");
		printf("1-PUSH\t2-POP\t3-DISPLAY\t4-EXIT\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case PUSH:
			{
				printf("\aEnter the item to be inserted\n");
				scanf("%d",&item);
				push(item);
				break;
			}
		case POP:
			{
				del=pop();
				printf("\athe deleted item is %d\n",del);
				break;
			}
		case DISPLAY:
			{
				display();
				break;
			}
		case EXIT:
			{
				exit(0);
			}
		default:
			{
				printf("\aINVALID OPTION!!!\n");
				break;
			}
		}
	}
	return 0;
}


void push(int item)
{
	if(top==SIZE-1)
	{
		printf("stack is full\n");
	}
	else
	{
		top++;
		s[top]=item;
	}
}

int pop()
{
	int del=0;

	if(top==EMPTY)
	{
		printf("stack is Empty\n");
	}
	else
	{
		del=s[top];
		top--;
	}
	return del;
}

void display()
{
	int i;
	if(top==EMPTY)
	{
		printf("stack is Empty\n");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\n",s[i]);
		}
	}
}