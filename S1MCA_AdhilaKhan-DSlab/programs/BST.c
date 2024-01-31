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
	else if(val == Root->data)
  		printf("Same data can't be stored");
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
		printf("%d   ",Root->data);
		preorder(Root->left);
		preorder(Root->right);
	}

}
void postorder(struct node *Root)
{
	if(Root!=NULL)
	{
		postorder(Root->left);
		postorder(Root->right);
		printf("%d   ",Root->data);
	}

}
struct node* minValueNode(struct node* Root)
{
   if(Root!=NULL)
   {
    struct node* current = Root;
    while (current->left != NULL)
        current = current->left;
    return current;
   }
   return NULL;
}
struct node* delete(struct node *Root,int val)
{

	if(Root!=NULL)
	{

 	if (val< Root->data)
        Root->left = delete(Root->left,val);
    else if (val > Root->data)
        Root->right = delete(Root->right, val);
    else {
        // node with only one child or no child
        if (Root->left == NULL) {
            struct node* temp = Root->right;
            free(Root);
            return temp;
        }
        else if (Root->right == NULL) {
            struct node* temp = Root->left;
            free(Root);
            return temp;
        }
        // node with two children: 
        // Get the inorder successor
        // (smallest in the right subtree)
        struct node* temp = minValueNode(Root->right);
 
        // Copy the inorder 
        // successor's content to this node
        Root->data = temp->data;
 
        // Delete the inorder successor
        Root->right = delete(Root->right, temp->data);
    }
    return Root;
	}
	else
	{
		printf("\n No such Node in the BST");
	 	return NULL;
	}
}

int main()
{
        int val;
        int ch;
        struct node *root=NULL;
 	printf("\n BST\n");
	printf("\n ----------------------------------------------\n");
	printf(" 1. INSERT\n 2. DELETE\n 3. SEARCH \n 4. TRAVERSE \n 5. DISPLAY \n 6. EXIT \n");
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
					 		if(root==NULL)
								printf("\n The BST is Empty!!\n");
             		 		else
							{
             		 			printf("\n Enter the data : ");
								scanf("%d",&val);	
             		 			root=delete(root,val);
							}
             				break;
             		 case 3:
             		 		if(root==NULL)
             		 			printf("\n The BST is Empty!!\n");
             		 		else
							{
								printf("\n Enter the data to be searched : ");
								scanf("%d",&val);	
             		 			if(search(root,val)==NULL)
             		 				printf("\n Item not found");
             		 			else
             		 				printf("\n Item found");
							}
             				break;
             		case 4:
							if(root==NULL)
             		 			printf("\n The BST is Empty!!\n");
             		 		else
							{
             		 		printf("\n 1. Inorder \n 2. Preorder \n 3. Postorder\n Choose any one of the travesal option : ");
             		 		int op; 
           				scanf("%d",&op);
             		 		switch(op)
             		 		{
             		 			case 1:
             		 					inorder(root);
             		 					break;
             		 			case 2:
             		 					preorder(root);
             		 					break;
             		 			case 3:
             		 					postorder(root);
             		 					break;
             		 			default : 
             		 					printf("\n Not a vlid choice !!!!");
               				  			break;
               				  }
							}
             		 			break;		
              		 case 5:
					 		if(root!=NULL)
             		 			display(root);
							else
								printf("\n BST is empty");
             				break;
             		case 6: printf("\n Program exited !!!");
                 			 return 0;
			default : printf("\n Not a vlid choice !!!!");
               				   break;
               	}
             } while(1);
}