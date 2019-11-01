#include<stdio.h>
#include<conio.h>

int fib(int n)
{
	 int val;
	  if(n<=2)
	  {
	  	val=1;
	  }
	  else
	  {
	  	   val=fib(n-1)+fib(n-2);
	  }
	  return val;
}
int main()
{
	int n;
	scanf("%d",&n);
	int val=fib(n);
	printf("%d",val);
	return 0;
}
  
