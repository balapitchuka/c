#include<stdio.h>
#include<conio.h>

int main()
{
	char x[15];
	int i;
	for(i=0;i<15;i++)
	{
	     x[i]='a';
	}
	int c=atoi(x);
	
	printf("%d",c);
	return 0;
}
