#include<iostream>                      //  DEPTH FIRST TRAVERSAL OF A GRAPH
using namespace std;



void DFS(int i,int n,int arr[n][n],int visited[])
{
	int j;
	
	cout<<i<<" ";
	
	visited[i]=1;
	for(j=0;j<n;j++)
	{
		if(!visited[j] && arr[i][j]==1)
		{
			DFS(j);
		}
	}
}

void main()
{
	int i,j,n,m;
	cin>>n;
	int **arr=new *int[n];
	for(i=0;i<n;i++)
	{
		arr[i]=new int[n];
	}
	 
	
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		cin>>a[i][j];
	 		
		 }
	 }
	 
	 int *visited=new int[n];
	 for( i=0;i<n;i++)
    {
    	visited[i]=0;
	}
	 DFS(0,n,arr,visited);
	 return 0;
}
