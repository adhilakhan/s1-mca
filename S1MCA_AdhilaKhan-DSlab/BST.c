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
struct node* search(struct node *Root,int val)	
{
	if(Root!=NULL)
	{
		if(val==Root->data)
		{	
			return Root;
		}
		else if(val<Root->data)
			search(Root->left,val);
		else if(val>Root->data)
			search(Root->right,val);
	}
	else 
		return NULL;	
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
void inorder(struct node *Root)
{
	if(Root!=NULL)
	{
		inorder(Root->left);
		printf("%d   ",Root->data);
		inorder(Root->right);
	}

}
void preorder(struct node *Root)
{
	if(Root!=NULL)
	{
		preorder(Root->left);
		printf("%d   ",Root->data);
		preorder(Root->right);
	}

}
void postorder(struct node *Root)
{
	if(Root!=NULL)
	{
		postorder(Root->left);
		printf("%d   ",Root->data);
		postorder(Root->right);
	}

}
void delete(struct node *Root)
{
}

int main()
{
        int val;
        int ch;
        struct node *root=NULL;
 	printf("\n BST\n");
	printf("\n ----------------------------------------------\n");
	printf(" 1. INSERT\n 2.DELETE\n 3. SEARCH \n 4. TRAVERSE \n 5. DISPLAY \n 6. EXIT \n");
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
             		 		delete(root);
             				break;
             		 case 3:
             		 		if(root==NULL)
             		 			printf("\n The BST is Empty!!\n");
             		 		else
						printf("\n Enter the data to be searched : ");
						scanf("%d",&val);	
             		 			if(search(root,val)==NULL)
             		 				printf("\n Item not found");
             		 			else
             		 				printf("\n Item not found");
             				break;
             		case 4:
             		 		printf("\n a. Inorder \n b. Preorder \n c. Postorder\n Choose any one of the travesal option : ");
             		 		char op; 
             		 		scanf("%d",&op);
             		 		switch(op)
             		 		{
             		 			case 'a':
             		 					inorder(root);
             		 					break;
             		 			case 'b':
             		 					preorder(root);
             		 					break;
             		 			case 'c':
             		 					postorder(root);
             		 					break;
             		 			default : 
             		 					printf("\n Not a vlid choice !!!!");
               				  			break;
               				  }
               				  break;
             		 					
              		 case 5:
             		 		display(root);
             				break;
             		case 6: printf("\n Program exited !!!");
                 			 return 0;
			default : printf("\n Not a vlid choice !!!!");
               				   break;
               	}
             } while(1);
}

