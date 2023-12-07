#include <stdio.h>
#include<stdlib.h>

void insert(int a[],int n )
{
for(int i=0;i<n;i++)
	{
		int r=0;
		scanf("%d",&a[i]);
		for(int j=0;j<i;j++)
		{
			if(a[j]==a[i])
			{
				r=1;
				break;	
			} 
		}
		if(r==1)
		{
			printf("\n Set cant't have duplicate values, continue inserting by another values!! \n");
			i--;
			continue;
		}
	}
}

void display(int a[],int n )
{
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}

void bstring(int us[], int a[], int bs[], int an,int un)
{
	int i,j;
	for(i=0;i<un;i++)
		bs[i]=0;
	for(i=0;i<un;i++)
	{
		
		for( j=0;j<an;j++)
		{
			if(us[i]==a[j])
			{
				bs[i]=1;
				break;				
			}
		}

	}	
}

void Union(int us[],int bs1[],int bs2[],int un)
{
	printf("\n The union of the given sets is : ");
	for(int i=0;i<un;i++)
	{
		if(bs1[i]==1||bs2[i]==1)
			printf("%d \t",us[i]);
	}	 	
}

void Intersection(int us[],int bs1[],int bs2[],int un)
{
	printf("\n The intersection of the given sets is : ");
	for(int i=0;i<un;i++)
	{
		if((bs1[i]==1)&&(bs2[i]==1))
			printf("%d \t",us[i]);
		
	}
} 

void complement(int us[],int bs1[],int bs2[],int un)
{
	printf("\n The compliment of set 1 is : ");
	for(int i=0;i<un;i++)
	{
		if(bs1[i]!=1)
			printf("%d \t",us[i]);
	}
	printf("\n The compliment of set 2 is : ");
	for(int i=0;i<un;i++)
	{
		if(bs2[i]!=1)
			printf("%d \t",us[i]);
	}
}
int main()
{
	int n1,n2,ch,un;
	printf("\n Enter the size of the universal set : ");
	scanf("%d",&un);
	int u[un],bs1[un],bs2[un];
	printf("\n Enter the elements of the universal set : ");
	insert(u,un);
	display(u,un);
	printf("\n Enter the size of the first set :");
	scanf("%d",&n1);
	int set1[n1];
	printf("\n Enter the first set :");
	insert(set1,n1);
	printf("\n Enter the size of the second set :");
	scanf("%d",&n2);
	int set2[n2];
	printf("\n Enter the second set :");
	insert(set2,n2);
	printf("\n 1. Display Set \n 2. Display bitstring \n 3. Union \n 4. Intersection \n 5. Compliment \n 6. Set difference \n 8. Exit ");
	do
	{
		 printf("\n Choose any one of the operation  : ");
		 scanf("%d",&ch);
		 switch(ch)
 		{
			case 1:	
					printf("\n Set 1 : ");
					display(set1,n1);
					printf("\n Set 2 : ");
					display(set2,n2);
					break;
             		
             		case 2 : 
             				bstring(u,set1,bs1,n1,un);
             				bstring(u,set2,bs2,n2,un);
             				printf("\n Set 1 : ");
             				display(bs1,un);
					printf("\n Set 2: ");
					display(bs2,un);
					break;
			case 3 : 
					Union(u,bs1,bs2,un);
					break;
					
             		case 4 : 
					Intersection(u,bs1,bs2,un);
					break;
			case 5 : 
					complement(u,bs1,bs2,un);
					break;
			case 6 : 
					setdiff(u,bs1,bs2,un);
					break;
			case 7 : 
					printf("\n Program terminated !!!!");
					return 0;
					
			default : printf("\n Not a vlid choice !!!!");
               				  break;
               	}
            } while(1);
}


