#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *right;
	struct node *left;
};
int size=0;
struct node* create(int val)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
struct node* insert(struct node *Root, int val)
{
	
	if(Root==NULL)
		return create(val);
	else if(val>Root->data)
		Root->right=insert(Root->right,val);
	else
		Root->left=insert(Root->left,val);
	return Root;
}	
void display(struct node *Root)
{
	if(Root!=NULL)
	{
		display(Root->left);
		printf("%d   ",Root->data);
		display(Root->right);
	}

}


int main()
{
        int val;
        int ch;
        struct node *root=NULL;
 	printf("\n BST\n");
	printf("\n ----------------------------------------------\n");
	printf(" 1. Insert \n 2. DISPLAY \n 3. EXIT \n");
	do
	{
		 printf("\n Choose any one of the operation  : ");
		 scanf("%d",&ch);
		 switch(ch)
 		{
			case 1:	
					printf("\n Enter the data : ");
					scanf("%d",&val);	
					if(root==NULL)
						root=create(val);
					else
						insert(root,val);
             			    	break;
             		 case 2:
             		 		display(root);
             				break;
             		case 3: printf("\n Program exited !!!");
                 			 return 0;
			default : printf("\n Not a vlid choice !!!!");
               				   break;
               	}
             } while(1);
}

