/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	int data ;
	char name[20];
	struct node * link;

};
struct node * head=NULL;
//function declarations
void insert_F(int item);
int Del_F();
void insert_R(int item);
int Del_R();
void insert_M(int item , int position);
int Del_M(int );
void display();
enum {INSERTION_FRONT=1,DELETE_FRONT,INSERT_MIDDLE,DELETE_MIDDLE,INSERTION_REAR,DELETE_REAR,DISPLAY,EXIT};

int main ()
{
	while(1)
	{
		int choose;
		printf("Enter your choose \n");
		printf("1-INSERTION_FRONT,2-DELETE_FRONT,3-INSERT_MIDDLE,4-DELETE_MIDDLE,5-INSERTION_REAR,6-DELETE_REAR,7-DISPLAY,8-EXIT \n");
		scanf("%d",&choose);

		switch(choose)
		{
		case INSERTION_FRONT:
			{
				int item;
				printf("Enter the front item \n");
				scanf("%d",&item);
				insert_F(item);	
			}
			break;
		case DELETE_FRONT:
			{
				int del;
				del=Del_F();
				printf("Deleted item: %d \n",del);
			}
			break;
		case INSERT_MIDDLE:
			{
				int item,position;

				printf("Enter the item \n");
				scanf("%d",&item);
				printf("Enter the position \n");
				scanf("%d",&position);
				insert_M(item,position);

			}
			break;
		case DELETE_MIDDLE:
			{
				int del,position;
				printf("Enter the position\n");
				scanf("%d",&position);
				del=Del_M(position);
				printf("Deleted item at position[%d]: %d \n",position,del);

			}
			break;
		case INSERTION_REAR:
			{
				int item;
				printf("Enter the rear item\n");
				scanf("%d",&item);
				insert_R(item);	
			}
			break;
		case DELETE_REAR:
			{
				int del;
				del=Del_R();
				printf("Deleted  item (rear): %d \n",del);
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
		default :
			{
				printf("invalid choice");
			}
			break;
			
		}
	}
	return 0;
}
void insert_F(int item)  //insertion at front end
{
	//struct node * ptr=head;
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	if(temp!=NULL)
	{
		temp->data=item;
		temp->link=head;
		head=temp;

	}
}
int Del_F()//deletion at front end
{   int del=0;
struct node * ptr=head;
if (ptr!=NULL)
{
	del=ptr->data;
	head=ptr->link;
	free(ptr);
	ptr=NULL;

}return del;
}
void insert_R(int item)//insertion at rear end 
{
	struct node *ptr=head;
	struct node* temp=(struct node *)malloc(sizeof(struct node));
	temp->data=item;
	//printf("%d\n",temp->data);
	temp->link=NULL;

	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
		//	ptr=temp;
	}
	ptr->link=temp;

}
int Del_R()
{
	int del;

	struct node *ptr=head;
	struct node* prev=NULL;
	while(ptr->link!=NULL)
	{
		prev=ptr;
		ptr=ptr->link;
	}
	del=ptr->data;
	//printf("%d\n",ptr->data);
	prev->link=ptr->link;
	free(ptr);
	ptr=NULL;
	return del;

}
void insert_M(int item , int position)
{
	int count=1;
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* ptr=head;
	if(temp!=NULL)
	{
		temp->data=item;
	}
	while(count<position-1)
	{
		ptr=ptr->link;
		count++;
	}
	temp->link=ptr->link;
	ptr->link=temp;
}
int Del_M(int position)
{
	int count=1;
	int del;
	struct node*ptr=head;
	struct node*prev=NULL;
	while(count<position)
	{
		prev=ptr;
		ptr=ptr->link;
		count++;
	}
	del=ptr->data;
	prev->link=ptr->link;
	free(ptr);
	ptr=NULL;
	return del;
}



void display()
{
	struct node * ptr=head;
	while (ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->link;
	}

}
*/