#include <stdio.h>
#define size 7
int ar[size],n;
void deleteBeg()
{
int i,data;
if(n==0)
    printf("\n Array is empty. Deletion not possible!!!  ");
else
{
	data=ar[0];
	for(i=0;i<n;i++)
		ar[i]=ar[i+1];
	n--;
	printf("%d is deleted ", data);
	printf("\n The array after deletion is : ");
	for(i=0;i<n;i++)
		printf("%d  ",ar[i]);
}
}
void deleteAtPos()
{
	int i,data,pos;
	if(n==0)
		printf("\n Array is empty . Deletion not possible!!!  ");
	else
	{
		printf("\n Enter the positon to be deleted : ");
		scanf("%d",&pos);
		if(pos>n||pos<=0)
			printf("\n Deletion not possible at this positon!!!");
		else
		{
			data=ar[pos-1];
			for(i=pos-1;i<n;i++)
				ar[i]=ar[i+1];
			n--;
			printf("%d is deleted ", data);
			printf("\n The array after deletion is : ");
			for(i=0;i<n;i++)
				printf("%d  ",ar[i]);
		}
	}
}
void deleteEnd()
{
	int data,i;
	if(n==0)
		printf("\n Array is empty . Deletion not possible!!!  ");
	else
	{
		data=ar[n-1];
		n--;
		printf("%d is deleted ", data);
		printf("\n The array after deletion is : ");
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
	printf("\n --------------------Deletion-----------------------\n");
	printf("1. Deletion at begning  \n 2. Deletion at a position \n 3. Deletion at end \n 4. Exit\n ------------------------------------------------------------");
	do
	{
		printf("\n Enter your choice of deletion : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
				deleteBeg();
				break;
			case 2:
				deleteAtPos();
				break;
			case 3:
				deleteEnd();
				break;
			case 4:
				printf("\n Program terminated!!!");
				return 0;
			default :
				printf("\n Invalid deletion choice ");
				break;
		}
	}while(1);
}
	
