#include<stdio.h>
#include<stdlib.h>
#define null 0
struct node
{
	int data;
	struct node* link;
};
struct node* head=null;

void Insert_Front(int);
int Delete_Front();
void Insert_Middle(int, int);
int Delete_Middle(int);
void Insert_Rear(int);
int Delete_Rear();
void Display();
enum{INSERT_FRONT=1,DELETION_FRONT,INSERT_MIDDLE,DELETION_MIDDLE,INSERT_REAR,DELETION_REAR,DISPLAY,EXIT};
int main()
{
	while(1)
	{
		int choice;
		printf("ENTER THE CHOICE\n");
		printf("1-INSERT_FRONT,2-DELETION_FRONT,3-INSERT_MIDDLE,4-DELETION_MIDDLE,5-INSERT_REAR,6-DELETION_REAR,7-DISPLAY,8-EXIT\n");
		scanf_s("%d",&choice);
		switch(choice)
		{
		case INSERT_FRONT:
			{
				int item;
				printf("ENTER THE ITEM\n");
				scanf_s("%d",&item);
				Insert_Front(item);
			}
			break;
		case DELETION_FRONT:
			{
				int del;
				del=Delete_Front();
				printf("DELETED ITEM IS: %d\n",del);
			}
			break;
		case INSERT_MIDDLE:
			{
				int item;
				int position;
				printf("ENTER THE ITEM\n");
				scanf_s("%d",&item);
				printf("ENTER THE POSITION\n");
				scanf_s("%d",&position);
				Insert_Middle(item,position);

			}
			break;
		case DELETION_MIDDLE:
			{
				int position;int del;
				printf("ENTER THE POSITION\n");
				scanf_s("%d",&position);
				del=Delete_Middle(position);
				printf("DELETED ITEM IS: %d",del);
			}
			break;
		case INSERT_REAR:
			{
				int item;
				printf("ENTER THE ITEM\n");
				scanf_s("%d",&item);
				Insert_Rear(item);
			}
			break;
		case DELETION_REAR:
			{
				int del;
				del=Delete_Rear();
				printf("DELETED ITEM IS: %d\n",del);
			}
			break;
		case DISPLAY:
			{
				Display();
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
void Insert_Front(int item)
{
	struct node* ptr=head;
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	if(temp!=null)
	{
		temp->data=item;
		temp->link=head;
		head=temp;
	}
}
int Delete_Front()
{
	int del;
	struct node*ptr=head;
	if(ptr!=null)
	{
		del=ptr->data;
		head=ptr->link;
		free(ptr);
		ptr=null;

	}
	return del;
}
void Insert_Middle(int item , int position)
{
	int count=1;
	struct node *ptr=head;
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	if(temp!=null)
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
int Delete_Middle(int position)
{
	int count=1;
  int del;
	struct node* ptr=head;
	struct node* pre=null;
	while(count<position)
	{
		pre=ptr;
		ptr=ptr->link;
		count++;
	}
	del=ptr->data;
	pre->link=ptr->link;
	free(ptr);
	ptr=null;
	return del;
}

void Insert_Rear(int item)
{
	struct node* ptr=head;
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	if(temp!=null)
	{
		temp->data=item;
		temp->link=null;
	}
	while(ptr->link!=null)
	{
		ptr=ptr->link;
	}
	ptr->link=temp;

}
int Delete_Rear()
{
	int del;
	struct node* ptr=head;
	struct node* pre=null;
	while(ptr->link!=null)
	{
		pre=ptr;
		ptr=ptr->link;
	}
	del=ptr->data;
	pre->link=ptr->link;
	free(ptr);
	ptr=null;
	return del;
}
void Display()
{
	struct node* ptr=head;
	while(ptr!=null)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->link;
	}
}
