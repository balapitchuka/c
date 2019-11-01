#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node 
{
	int data;
	struct node *left;
	struct node *right;
	
}tree;

int numnodes(tree * root)
{
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		return size(root->left)+1+size(root->right);
	}
}


void main()
{
	tree *head=NULL;
	
}

