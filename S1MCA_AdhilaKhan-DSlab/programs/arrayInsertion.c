#include <stdio.h>
#define size 7
int ar[size],n;
void InsertBeg()
{
int i,data;
if(n==size)
    printf("\n Array is full . Insertion not possible!!!  ");
else
{
	printf("\n Enter the element to be inserted : ");
	scanf("%d",&data);
	for(i=n-1;i>=0;i--)
		ar[i+1]=ar[i];
	ar[0]=data;
	n++;
	printf("\n The array after insertion is : ");
	for(i=0;i<n;i++)
		printf("%d  ",ar[i]);
}
}
void InsertAtPos()
{
	int i,data,pos;
	if(n==size)
		printf("\n Array is full . Insertion not possible!!!  ");
	else
	{
		printf("\n Enter the element and positon to be inserted : ");
		scanf("%d%d",&data,&pos);
		if(pos>n+1||pos<=0)
			printf("\n Insertion not possible at this positon!!!");
		else
		{
			for(i=n-1;i>=pos-1;i--)
				ar[i+1]=ar[i];
			ar[pos-1]=data;
			n++;
			printf("\n The array after insertion is : ");
			for(i=0;i<n;i++)
				printf("%d  ",ar[i]);
		}
	}
}
void InsertEnd()
{
	int data,i;
	if(n==size)
		printf("\n Array is full . Insertion not possible!!!  ");
	else
	{
		printf("\n Enter the element to be inserted : ");
		scanf("%d",&data);
		ar[n]=data;
		n++;
		printf("\n The array after insertion is : ");
		for(i=0;i<n;i++)
			printf("%d  ",ar[i]);
	}
}
int main()
{
	int i,ch;
	printf("\n Enter the number of elements in the array : ");
	scanf("%d",&n);
	printf("\n Enter the elements to the array : ");
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	printf("\n --------------------Insertion-----------------------\n");
	printf("1. insertion at begning  \n 2. Insertion at a position \n 3. Insertion at end \n 4. Exit\n ------------------------------------------------------------");
     do
	{
		printf("\n Enter your choice of insertion : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
				InsertBeg();
				break;
			case 2:
				InsertAtPos();
				break;
			case 3:
				InsertEnd();
				break;
			case 4:
				printf("\n Program terminated!!!");
				return 0;
			default :
				printf("\n Invalid insertion choice ");
				break;
		}
	}while(1);
}
				
