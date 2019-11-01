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
	tree *temp;
	if(root==NULL)
	{
	   temp=(tree*)malloc(sizeof(tree));
	   temp->data=data;
	   temp->right=NULL;
	   temp->left=NULL;
	   return temp;	
	}
	if(root->data > data)
	{
		root->left=insertion(root->left,data);
	}
	else
	{
		root->right=insertion(root->right,data);
	}
	
	return root;
}



int count=0;

void inorder(tree *root,int k)
{
	if(root!=NULL)
	{
		inorder(root->left,k);
		count=count+1;
		if(count==k)
		{
			printf("%d smallest element is %d",k,root->data);
			return;
		}
		inorder(root->right,k);
		
	}
}

int main()
{
	tree *root=NULL;
	int n,num,i;
	printf("enter how many u want to insert\n");
	scanf("%d",&n);
	printf("enter the data");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num);
		root=insertion(root,num);
	}
	
	inorder(root,1);
	
    return 0;
}


