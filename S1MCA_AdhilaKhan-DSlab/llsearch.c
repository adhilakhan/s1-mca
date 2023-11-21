#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*temp;
int size=0;
void Insert()
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

	 	temp=head;
	 	while(temp->next!=NULL)
		{
			temp=temp->next;
		}
	 	temp->next=newnode;
	 }
	 size++;
}

void search()
{
	int item;
	printf("\n Enter the elements to be searched : ");
	scanf("%d",&item);
	temp=head;
	int i=0;
	while(temp!=NULL)
	{
		i++;
		if(temp->data==item)
		{
			printf("\n The item is found  as the %d th node in the list ",i);
			break;
		}
		temp=temp->next;
	}
}

void Display()
{
	if(head==NULL)
		printf("\n Empty Linked list !!!");
	else
	{
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
printf(" 1. Insert \n 2. Search \n3. DISPLAY \n 4. EXIT \n");
do
{
 printf("\n Choose any one of the operation : ");
 scanf("%d",&ch);
 switch(ch)
 {
	case 1: Insert();
                 break;
	case 2: search();
    		break;
    	case 3: Display();
                  break;
	case 4: printf("\n Program exited !!!");
                  return 0;
	default : printf("\n Not a valid choice !!!!");
                  break;
 }
 }
 while(1);
 } 
