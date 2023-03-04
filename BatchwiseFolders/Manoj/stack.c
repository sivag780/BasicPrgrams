#include<stdio.h>

void push(int);
int pop();
void disp();
int s[5];
int top=-1;

enum STACK {PUSH=1,POP,DISPLAY,EXIT};

int main()
{
	int choice,item,del;
	while(1)
	{
		printf("Enter the choice\n");
		printf("1-PUSH\n2-POP\n3-DISPLAY\n4-EXIT\n");
		scanf("%d",&choice);

		switch(choice)
		{
		case PUSH:
			{
				printf("Enter the item\n");
				scanf("%d",&item);
				push(item);
			}
			break;
		case POP:
			{
				del=pop();
				printf("deleted item is %d\n",del);
			}
			break;
		case DISPLAY:
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
				printf("INVALID OPTION\n");
			}
		}
	}
	
}

void push(int item)
{
	if(top==4)
	{
		printf("stack is full");
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
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		del=s[top];
		top--;
	}
	return del;
}

void disp()
{
	int i;
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		for(i=top; i>=0; i--)
		{
			printf("%d\n",s[i]);
		}
	}
}