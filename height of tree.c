#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


typedef struct tag
{
	int data;
	struct tag *left;
	struct tag *right;

}tree;

tree*  newnode(int data)
{
	tree *temp=(tree*)malloc(sizeof(tree));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

int hei(tree *root)
{
	int lh,rh;
	if(root==NULL)
	{
		return 0;
		
	}
	else
	{
		lh=hei(root->left);
		rh=hei(root->right);
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

int heig(tree *root)
{
	int lh,rh;
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		if(root->left==NULL && root->right==NULL)
		{
			return -1;
			
		}
		else
		{
			lh=heig(root->left);
			rh=heig(root->right);
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
}

void main()
{
	int height;
	tree *root;
	root=newnode(5);
	root->left=newnode(6);
	root->right=newnode(8);
	root->left->left=newnode(10);
	printf("%d\n",hei(root));
    	printf("%d",heig(root));	
	
}
