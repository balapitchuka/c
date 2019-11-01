#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct tag
{
	int data;
	struct tag *left;
	struct tag *right;
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

void find(tree *root,int key,tree **suc,tree **pre)
{
	
	if(root==NULL)
	{
		return;
	}
	if(root->data==key)
	{
		if(root->left!=NULL)
		{
			tree *temp=(root->left);
			while(temp->right!=NULL)
			{
				temp=temp->right;
				*pre=temp;
			}
		}
		if(root->right!=NULL)
		{
			tree *temp1=root->right;
			while(temp1->left!=NULL)
			{
				temp1=temp1->left;
				*suc=temp1;
			}
		}
		
	}
	else if(root->data >key)
	{
		*suc=root;
		find(root->left,key,suc,pre);
	}
	else
	{
		*pre=root;
		find(root->right,key,suc,pre);
	}
	
	
}

void printing(tree *root)
{
		
	if(root != NULL)
	{
		
		printing(root->left);
		printf("%d ",root->data);
		printing(root->right);
	}
		
}


int main()
{
	tree *root=NULL,*pre=NULL,*suc=NULL;
	int n,num,i;
	printf("enter how many u want to insert\n");
	scanf("%d",&n);
	printf("enter the data");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num);
		root=insertion(root,num);
	}
	
	printing(root);
	find(root,4,&suc,&pre);
	if(pre!=NULL)
	{
		printf("\ninorder predessor is %d\n",pre->data);
    }
    if(suc!=NULL)
    {
	
	printf("inorder successor is %d\n",suc->data);
    }
    return 0;
}




