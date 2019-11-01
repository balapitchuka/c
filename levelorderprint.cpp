#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct tag
{
	int data;
	struct tag *left;
	struct tag *right;
}tree;

int height(tree *root)
{
	int lh,rh;
	if(root==NULL)
	{
		return 0;
		
	}
	else
	{
		lh=height(root->left);
		rh=height(root->right);
		if(lh>rh)
		{
			return lh+1;
		}
		else
		{
			return rh+1;
		}
		
	}
}

void actualprint(tree *root,int h)
{
	if(root==NULL)
	{
		return;
	}
	if(h==1)
	{
		printf("%d ",root->data);
	}
	else  if(h>1)
	{
		actualprint(root->left,h-1);
		actualprint(root->right,h-1);
	}
}


void levelorder(tree *root)
{
	int h,i;
	h=height(root);
	for(i=1;i<=h;i++)
	{
		actualprint(root,i);
		printf("\n");
	}
}

tree*  newnode(int data)
{
	tree *temp=(tree*)malloc(sizeof(tree));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}


int main()
{
	
	tree *root;
	root=newnode(5);
	root->left=newnode(6);
	root->right=newnode(8);
	root->left->left=newnode(10);
    levelorder(root);
   return 0; 
	
}

