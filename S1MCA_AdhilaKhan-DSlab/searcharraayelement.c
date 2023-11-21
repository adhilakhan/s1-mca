#include <stdio.h>
void main()
{
int i,n,item,pos=0;
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
printf("\n Enter the item to be searched : ");
scanf("%d",&item);
for(i=0;i<n;i++)
{
   if(item==a[i])
     pos=i+1;
}
if(pos!=0)
  printf("\n The item %d is found at positon %d ",item,pos);
 else 
  printf("\n The item %d is not found ",item);
}

