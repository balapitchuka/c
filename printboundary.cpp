#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *left,*right;
	
};
void printleaves(struct node *root)
{
	if(root)
	{
		printleaves(root->left);
		if(root->left==NULL && root->right==NULL)
		{
			printf("%d ",root->data);
		}
		printleaves(root->right);
	}
}
void printleft(struct node *root)
{
	if(root)
	{
	   if(root->left!=NULL)
	   {
		
		printf("%d ",root->data);
		printleft(root->left);
	  }
	  else if(root->right!=NULL)
	  {
	  	printf("%d ",root->data);
	  	printleft(root->right);
	  }
	  
	}
}

void printright(struct node *root)
{
	if(root)
	{
	   if(root->right!=NULL)
	   {
		
		printf("%d ",root->data);
		printright(root->left);
	  }
	  else if(root->left!=NULL)
	  {
	  	printf("%d ",root->data);
	  	printright(root->right);
	  }
	  
	}
}

void printBoundary(struct node *root)
{
	if(root)
	{
		printf("%d ",root->data);
		printleft(root->left);
		printleaves(root->left);
		printleaves(root->right);
		printright(root->right);
	}
}

struct node* newNode( int data )
{
    struct node* temp = (struct node *) malloc( sizeof(struct node) );
 
    temp->data = data;
    temp->left = temp->right = NULL;
 
    return temp;
}

int main()
{
    
    struct node *root         = newNode(20);
    root->left                = newNode(8);
    root->left->left          = newNode(4);
    root->left->right         = newNode(12);
    root->left->right->left   = newNode(10);
    root->left->right->right  = newNode(14);
    root->right               = newNode(22);
    root->right->right        = newNode(25);
 
    printBoundary( root );
 
    return 0;
}
