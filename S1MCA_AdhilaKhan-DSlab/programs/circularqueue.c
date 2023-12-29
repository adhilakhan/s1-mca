#include <stdio.h>
#define size 5
int cq[size],rear=-1,front=-1;
int IsEmpty()
{	
	if(front==-1)
	{
		printf("\n Queue is Empty !!!");
		return 1;
	}
	else
		return 0;
}
int IsFull()
{
	 if(((rear+1)%size)==front)
	{
		printf("\n Queue is full");
		return 1;
	}
	else 
		return 0;
}
void Enqueue()
{
	int data;
	if(IsFull()==1)
		return;
	else
	{	
		printf("\n Enter the Element to be inserted : ");
		scanf("%d",&data);
		if(front==-1)
		 	front=0;
		rear=(rear+1)%size;
		cq[rear]=data;
	}
}
void Dequeue()
{
	if(IsEmpty()==1)
		return;
	else
	{
		printf("\n The element deleted is %d ", cq[front]);
		if(front==rear)
			front=rear=-1;
		else
			front=(front+1)%size;	
	}
}
void Display()
{
	if(IsEmpty()==1)
		return;
	else
	{
		int i;
		printf("\n The Queue is : ");
		if(rear<front)
		{
			for(i=front;i<size;i++)
				printf("%d  ",cq[i]);
			for(i=0;i<=rear;i++)
				printf("%d  ",cq[i]);
		}
		else
		{
			for(i=front;i<=rear;i++)
				printf("%d  ",cq[i]);
		}
	}
}
int main()
{
int ch;
 printf("\n Queue Operations \n");
printf("\n ----------------------------------------------\n");
printf("1. Enqueue \n 2. Dequeue  \n 3.DISPLAY \n 4. EXIT \n");
do
{
 printf("\n Choose any one of the operation  : ");
 scanf("%d",&ch);
 switch(ch)
 {
    case 1: Enqueue();
                 break;
    case 2 : Dequeue();
    	         break;
    case 3 : Display();
                  break;
    case 4 : printf("\n Program exited !!!");
                  return 0;
   default : printf("\n Not a vlid choice !!!!");
                  break;
 }
 }
 while(1);
 }
	
