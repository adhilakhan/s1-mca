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
			printf("\n Set cant't have duplicate values, continue inserting by another values!!");
			i--;
			continue;
		}
	}
}
void display(int a[],int n )
{
	for(int i=0;i<n;i++)
		printf("%d",a[i]);
}
int main()
{
	int un;
	printf("\n Enter the size of the universal set : ");
	scanf("%d",&un);
	int u[un];
	printf("\n Enter the elements of the universal set : ");
	insert(u,un);
	display(u,un);
}
