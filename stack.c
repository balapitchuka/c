#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct name
{
   int top;
   int *array;
   int capacity;	
}stack; 

stack* createstack(int capacity)
{
	stack *sk=(stack*)malloc(sizeof(stack));
	sk->capacity=capacity;
	sk->top=-1;
	sk->array=(int *)malloc(sizeof(int)*capacity);
	return sk;
}

void push(stack *s,int n)
{
	if(s->top==s->capacity-1)
	{
		printf("\nOVERFLOW");
		return;
	}
	s->array[++s->top]=n;
	return;
}

int pop(stack *s)
{
	if(s->top==-1)
	{
		printf("UNDERFLOW");
		return INT_MIN;
	}
	return (s->array[s->top--]);
}

int peek(stack *s)
{
	if(s->top==-1)
	{
		printf("UNDERFLOW");
		return ;
	}
	return (s->array[s->top]);
}
int main()
{
	stack *s;
	s=createstack(10);
	push(s,10);
	push(s,20);
	push(s,45);
	int x=pop(s);
	printf("\npopped element is %d",x);
	 x=pop(s);
    printf("\npopped element is %d",x);
	x=peek(s);
	printf("\npeek element is %d",x);
	return 0;
}
