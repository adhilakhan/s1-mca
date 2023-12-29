#include <stdio.h>
void main()
{
	 int n1,n2,i,j;
	 printf("\n Enter the number of elements in the first array : ");
	 scanf("%d",&n1);
	 int ar1[n1];
	 printf("\n Enter the elements to the first array : ");
	 for(i=0;i<n1;i++)
	  	scanf("%d",&ar1[i]);
	  printf("\n Enter the number of elements in the second array : ");
	 scanf("%d",&n2);
	 int ar2[n2];
	 printf("\n Enter the elements to the second array : ");
	 for(i=0;i<n2;i++)
	  	scanf("%d",&ar2[i]);
	  int ar[n1+n2];
	  for(i=0;i<n1;i++)
	  	ar[i]=ar1[i];
	  for(int j=0; j<n2;j++,i++)
	         ar[i]=ar2[j];
	  printf("\n The first array is : ");
	  for(i=0;i<n1;i++)
	  	printf("%d  ",ar1[i]);
	  printf("\n The second array is : ");
	  for(i=0;i<n2;i++)
	  	printf("%d  ",ar2[i]);
	  printf("\n The merged array is : ");
	  for(i=0;i<(n1+n2);i++)
	  	printf("%d  ",ar[i]);
}
	  
