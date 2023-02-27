/*stack program :
1.this isthe FILO=first in last out service or last in first out
2.stack is used to store huge data*/



/*#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
#define EMPTY -1
enum stack{PUSH=1,POP,DISPLAY,EXIT};
int S[SIZE];
int top=EMPTY;
void push(int item);
int pop();
void disp();
int main ()
{
	/*push(10);
	push(250);
	push(330);
	disp();
	pop();
	disp();*/
	/*while(1)
	{
		int choice;
		printf("Enter the choice\n");
		printf("1-push , 2-pop, 3-Display, 4-Exit\n");
		scanf("%d",&choice);

	switch(choice)
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
			int del;
			del=pop();
			printf("Deleted item is :%d\n",del);
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
			printf("Invalid choice");
		}
		break;
		return 0;
	}
	}
}

void push(int item)
	{
		if (top==SIZE-1)
		{
			printf("stack is Full\n");
		}
		else
		{ 
			top++;
			S[top]=item;
		}
	}
	int pop()
	{
		int del;
		if (top==EMPTY)
		{
			printf("stack is Empty\n");
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
		int i;
	if (top==EMPTY)
	{
		printf("stack is Empty\n");
	}
	else
	{
		printf("stack items are:\n");
		for(i=top;i>=0;i--)
		{

			printf("%d\n",S[i]);
		}
	}
}*/

