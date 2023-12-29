#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head=NULL,*temp;
int size=0;
void Insert()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=NULL;
	newnode->prev=NULL;
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
	 	newnode->prev=temp;
	 }
	 size++;
}

void DeleteBeg()
{
	if(head==NULL)
		printf("\n The linked list is empty!!!");
	else
	{
		temp=head;
		head=head->next;
		head->prev=NULL;
		printf("\n %d is deleted ",temp->data);
		free(temp);
	}
	size--;
}

void DeleteEnd()
{
	if(head==NULL)
		printf("\n The linked list is empty!!!");
	else
	{
		if(head->next==NULL)
		{
			temp=head;
			head=head->next;
			head->prev=NULL;
			printf("\n %d is deleted ",temp->data);
			free(temp);
		}
		else
		{
			struct node *prev;
			temp=head;
			while(temp->next!=NULL)
			{
				prev=temp;
				temp=temp->next;
			}
			prev->next=NULL;
			printf("\n %d is deleted ",temp->data);
			free(temp);
		}
		size--;
	}	
}

void DeleteAtPos()
{
	if(head==NULL)
		printf("\n Empty Linked list !!!");
	else
	{
		int pos;
		printf("\n Enter the position : ");
		scanf("%d",&pos);
		if(pos<=0||pos>size)
			       printf("\n Invalid position!!");
	 	else
	 	{
	 		int i=1;
	 		temp=head;
	 		if(pos==1)
	 		{
	 			head=head->next;
				head->prev=NULL;
				printf("\n %d is deleted ",temp->data);
				free(temp);
	 		}
	 		else
	 		{
		 		while(i<pos-1)
		 		{
			 		temp=temp->next;
	 				i++;
	 			}
				struct node *delnode;
			
				delnode=temp->next;
				temp->next=delnode->next;
				delnode->next->prev=temp;
				printf("\n %d is deleted ",delnode->data);
				free(delnode);
			}
			size--;
	 	}	
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
		printf("\n Linked list in forward : \n");
		while(temp->next!=NULL)
		{
			printf("%d  ",temp->data);
			temp=temp->next;
		}
		printf("%d  ",temp->data);
		printf("\n Linked list in backward : \n");
		while(temp->prev!=NULL)
		{
			printf("%d  ",temp->data);
			temp=temp->prev;
		}
		printf("%d  ",temp->data);
	}
}


int main()
{
int ch;
 printf("\n Linked List Deletion \n");
printf("\n ----------------------------------------------\n");
printf(" 1. Insert \n 2. Delete At Begining  \n 3. Delete At End \n 4. Delete At Position \n 5. DISPLAY \n 6. EXIT \n");
do
{
 printf("\n Choose any one of the operation  : ");
 scanf("%d",&ch);
 switch(ch)
 {
	case 1: Insert();
                 break;
	case 2: DeleteBeg();
    		break;
	case 3: DeleteEnd();
    		break;
	case 4: DeleteAtPos();
    		break;
    	case 5: Display();
                  break;
	case 6: printf("\n Program exited !!!");
                  return 0;
	default : printf("\n Not a vlid choice !!!!");
                  break;
 }
 }
 while(1);
 } 
