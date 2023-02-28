#include<stdio.h>
#include<stdlib.h> 
/*#define SIZE 5
#define EMPTY -1

int s[SIZE];
int top=EMPTY;
void push(int);
void disp();
int main()
{
push(10);
push(12);
push(15);
push(18);
push(19);
push(19);
disp();
pop();
pop();
pop();
push(19);
disp();

}
void push(int item)
{
if (top==4)
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
if(top==-1)
{
printf("stack is empty");
}
else 
{
del=s[top];
top --;
}
return del;
}
void disp()
{
int i;
if (top==-1)
{
printf("stock is empty\n");
}

for(i=top;i>=0;i--)
{
printf("s[%d]=%d\n",i,s[i]);
}
}*/
//STACK IN DATA STRUCTURES
#define EMPTY -1
#define SIZE 5
int S[SIZE];
int top=EMPTY;
void push(int);
int pop();
void disp();
enum stack{PUSH=1,POP,DISP,EXIT};
int main()
{
	/*push(10);
	pop();
	disp();*/
	while(1)
	{
		int choice;
		printf("enter the choice\n");
		printf("1-push,2-pop,3-disp.4-exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case PUSH:
			{
				int item;
				printf("enter the item\n");
				scanf("%d",&item);
				push(item);
			}
			break;
		case POP:
			{
				int del=0;
				del=pop();
				printf("delete item is-%d\n",del);
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
				printf("invalid choice\n");
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
	int del;
	if (top==EMPTY)
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
	if (top==EMPTY)
	{
		printf("stack is empty\n");
	}
	else
	{
		int i;
		printf("stack items are \n");
		for (i=top;i>=0;i--)
		{
			printf("S[%d]=%d\n",i,S[i]);
		}

	}
}

