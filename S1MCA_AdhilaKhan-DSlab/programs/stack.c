#include <stdio.h>
#define size 3
 int st[size];
 int top=-1;
int isEmpty()
{
if (top==-1)
    {
    printf("\n Stack is empty!!!");
    return 1;
   }
   else 
   return 0;
}
int isFull()
{
   if (top==size-1)
   {
      printf("\n Stack is full!!!");
          return 1;
   }
   else 
   return 0;
}
void display()
{
if(isEmpty()==1)
   return;
else
   {
printf("\n The elements of the stack are : ");
for(int i=0;i<=top;i++)
    printf("%d\t",st[i]);
printf("\n");
}
}
void push()
{
int item;
if(isFull()==1)
    return;
else
   {
   printf("\n Enter the element to be pushed : ");
   scanf("%d",&item); 
   top++;
   st[top]=item;

   }
   //display();
}
void pop()
{
if(isEmpty()==1)
   return;
else
{
    printf("\n The element deleted is %d ", st[top]);
  top--;
  }  
}
void peek()
{
 if(isEmpty()==1)
   return;
   else 
   { 
     printf("\n The element at top positon is %d ",st[top]); 
}
}

int main()
{
int ch;
 printf("\n Stack Operations \n");
printf("\n ----------------------------------------------\n");
printf("1. PUSH \n 2. POP \n 3. PEEK \n 4.DISPLAY \n 5. EXIT \n");
do
{
 printf("\n Choose any one of the operation  : ");
 scanf("%d",&ch);
 switch(ch)
 {
    case 1: push();
                 break;
    case 2 : pop();
    	         break;
    case 3 : peek();
                  break;
    case 4 : display();
                  break;
    case 5 : printf("\n Program exited !!!");
                  return 0;
   default : printf("\n Not a vlid choice !!!!");
                  break;
 }
 }
 while(1);
 }
