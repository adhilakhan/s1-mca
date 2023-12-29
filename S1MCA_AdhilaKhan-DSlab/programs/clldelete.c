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
	newnode->next=newnode;
	printf("\n Enter the element :");
	scanf("%d",&newnode->data);
	if(head==NULL)
	       head=newnode;
	 else
	 {
	 	temp=head;
	 	while(temp->next!=head)
		{
			temp=temp->next;
		}
	 	temp->next=newnode;
		newnode->next=head;
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
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=head->next;
		temp=head;
		head=head->next;
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
		if(head->next==head)
		{
			temp=head;
			head=NULL;
			printf("\n %d is deleted ",temp->data);
			free(temp);
		}
		else
		{
			struct node *prev;
			temp=head;
			while(temp->next!=head)
			{
				prev=temp;
				temp=temp->next;
			}
			prev->next=head;
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
	 			temp=head;
				while(temp->next!=head)
				{
					temp=temp->next;
				}
				temp->next=head->next;
				temp=head;
				head=head->next;
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
		while(temp->next!=head)
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
