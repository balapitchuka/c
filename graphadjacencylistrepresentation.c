#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define max 8

typedef struct node
{
	int data;
	struct node *next;
	
}list;

struct gra
{
	int v;
	list *arr[max];
};

struct gra* creategraph(int v)
{
	struct gra *graph=(struct gra*)malloc(sizeof(struct gra));
	graph->v=v;
	
	int i;
	for(i=0;i<v;i++)
	{
		graph->arr[i]=NULL;
	}
	return graph;
}


void addedge(struct gra *graph,int src,int des)
{
	list *newnode=(list*)malloc(sizeof(list));
	newnode->data=des;
	newnode->next=NULL;
	newnode->next=graph->arr[src];
	graph->arr[src]=newnode;
	
	newnode=(list*)malloc(sizeof(list));
	newnode->data=src;
	newnode->next=NULL;
	newnode->next=graph->arr[des];
	graph->arr[des]=newnode;
}

void print(struct gra *graph)
{
	int v;
	for(v=0;v<graph->v;v++)
	{
		list *tra=graph->arr[v];
		printf("\nAdjacecy list of vertex %d\n head ",v);
		while(tra!=NULL)
		{
			printf("-> %d",tra->data);
			tra=tra->next;
		}
		printf("\n");
	}
}

void main()
{
	struct gra *graph;
	graph=creategraph(5);
	addedge(graph,0,1);
	addedge(graph,0,4);
	addedge(graph,1,2);
	addedge(graph,1,3);
	addedge(graph,1,4);
	addedge(graph,2,3);
	addedge(graph,3,4);
	 print(graph);
}
