#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *left,*right;
	
}tree;

tree* insertion(tree *root,int data)
{
	if(root==NULL)
    {
    	tree *temp=(tree*)malloc(sizeof(tree));
    	temp->data=data;
    	temp->left=NULL;
    	temp->right=NULL;
    	root=temp;
	}
	if(root->data > data)
	{
		root->left=insertion(root->left,data);
		
	}
	else if(root->data<data)
	{
		root->right=insertion(root->right,data);
	}
	
	return root;
}

tree* deletion(tree *root,int data)
{
	
	if(root==NULL)
	{
		return root;
	}
	if(root->data>data)
	{
		root->left=deletion(root->left,data);
		
	}
	else if(root->data<data)
	{
		root->right=deletion(root->right,data);
	}
	else
	{
		printf("hello");
		if(root->left ==NULL && root->right==NULL)
		{
			free(root);
			root=NULL;
			
		}
		else if(root->left==NULL)
		{
			tree *temp=root->right;
			free(root);
			root=temp;
		}
		else if(root->right==NULL)
		{
			tree *temp=root->left;
			free(root);
			root=temp;
		}
		else
		{
			tree *ptr=root->right;
			while(ptr->left!=NULL)
			{
				ptr=ptr->left;
				
			}
			root->data=ptr->data;
			root->right=deletion(root->right,root->data);
		}
		
	}
	return root;
}

void inorder(tree *root)
{
		
	if(root != NULL)
	{
		
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
		
}


int  main()
{
	tree *root=NULL;
	int n,data,no,option,i;
    scanf("%d",&option);
	while(1)
	{
			
	switch(option)
	{
		case 1:
			    printf("ENTER THE NO OF NODES U WANT IN YOUR BST");
			    scanf("%d",&n);
			    printf("\nENTER THE BST YOUR WANT TO CREATE STARTING WITH ROOT FIRST\n");
			    for(i=1;i<=n;i++)
			    {
			    	scanf("%d",&data);
			    	root=insertion(root,data);
				}
				break;
		case 2:
			   printf("ENTER THE NUMBER OF NODES YOU WANT TO DELETE\n");
			   scanf("%d",&no);
			   printf("ENTER THE NODES YOU WANT TO DELETE\n");
			   for(i=1;i<=no;i++)
			    {
			    	scanf("%d",&data);
			    	root=deletion(root,data);
				}
				break;
		case 3:
			  inorder(root);
			  break;
	}
	printf("\n");
	scanf("%d",&option);
}
	return 0;
}
