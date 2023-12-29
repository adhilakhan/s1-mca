#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
int size=0;
void InsertBeg()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=NULL;
	printf("\n Enter the element :");
	scanf("%d",&newnode->data);
	if(head==NULL)
	       head=newnode;
	 else
	 {
	 	newnode->next=head;
	 	head=newnode;
	 }
	 size++;
}
void InsertEnd()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=NULL;
	printf("\n Enter the element :");
	scanf("%d",&newnode->data);
	if(head==NULL)
	       head=newnode;
	 else
	 {
	 	struct node *temp;
	 	temp=head;
	 	while(temp->next!=NULL)
		{
			temp=temp->next;
		}
	 	temp->next=newnode;
	 }
	 size++;
}
void InsertAtPos()
{
	int pos;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=NULL;
	if(head==NULL)
		printf("\n Empty Linked List !!");
	else{
			printf("\n Enter the position : ");
			scanf("%d",&pos);
			if(pos<0||pos>size+1)
			       printf("\n Invalid position!!");
			 else
			 {
			 	printf("\n Enter the element :");
				scanf("%d",&newnode->data);
			 	if(pos==1)
			 	{
				 	newnode->next=head;
				 	head=newnode;
			 	}
			 	else
			 	{
				 	int i=1;
				 	struct node *temp;
				 	temp=head;
				 	while(i<pos-1)
					{
						temp=temp->next;
						i++;
					}
					newnode->next=temp->next;
				 	temp->next=newnode;
				
			 	}
			 }
			 size++;
		 }
}
void Display()
{
	if(head==NULL)
		printf("\n Empty Linked list !!!");
	else
	{
		struct node *temp;
		temp=head;
		while(temp->next!=NULL)
		{
			printf("%d  ",temp->data);
			temp=temp->next;
		}
		printf("%d  ",temp->data);
	}
}

int main()
{
int ch;
 printf("\n Linked List Insertion \n");
printf("\n ----------------------------------------------\n");
printf(" 1. Insert At Beginig \n 2. Insert At End  \n 3. Insert At Position \n 4. DISPLAY \n 5. EXIT \n");
do
{
 printf("\n Choose any one of the operation  : ");
 scanf("%d",&ch);
 switch(ch)
 {
    case 1: InsertBeg();
                 break;
    case 2: InsertEnd();
    		break;
    case 3: InsertAtPos();
    		break;
    case 4 : Display();
                  break;
    case 5 : printf("\n Program exited !!!");
                  return 0;
   default : printf("\n Not a vlid choice !!!!");
                  break;
 }
 }
 while(1);
 } 
