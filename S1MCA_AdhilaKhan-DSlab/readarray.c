#include <stdio.h>
void main()
{
int i,n;
printf("\n Enter the size of the array : ");
scanf("%d",&n);
int a[n];
printf("\n Enterr the %d elements to the array : ",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n The entered array elements are : \n");
for(i=0;i<n;i++)
{
printf("\t %d",a[i]);
}
}
