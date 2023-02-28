//ORDINARY QUE 
//FIFO=first in first out (or)last in last out LILO
//
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
#define EMPTY -1
int Q[SIZE];
int F=-1; //this var to check the Q is empty before insertion
int R=0; //while deletion either it content the data
enum que{INSERT=1,DELESION,DISPLAY,EXIT};
void insertion(int item);
int del();
void display();
int main ()
{
/*insertion (100);
insertion (102);
del();
del();
display();*/
	while(1){
int choice ;
printf("Enter your choice :\n");
printf("1-Insert,2-Delesion,3-Display,4-Exit\n");
scanf("%d",&choice);


switch(choice)
{
case INSERT:
	{
		int item;
		printf("Insert the data in Que \n");
		scanf("%d",&item);
		insertion(item);	
	}
	break;
case DELESION:
	{
		int Del;
		Del=del();
		printf("Deleted Que items is :%d \n",Del);
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
		printf("Invalid entry \n");
		}
		break;
		return 0;

}
}
}
void insertion(int item)
{
	if (F==SIZE-1)
	{
		printf("Q is full\n ");
	}
	else
	{
		F++;
		Q[F]=item;	
	}
}
int del()
{
	int Del=0;
	if ((F==EMPTY)&&(R==0))
	{
		printf("Q is Empty\n ");
	}
	else
	{
		Del=Q[R];
		R++;
		if (R>F)
		{
			R=0;
			F=-1;
		}
	}return Del;

}
void display()
{
	int i;
	if ((F==EMPTY)&&(R==0))
	{
		printf("Q is Empty\n ");
	}
	for (i=R;i<=F;i++)
	{
	printf("Q[%d]=%d\n",i,Q[i]);
	}
}