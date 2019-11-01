#include<stdio.h>
#include<conio.h>

int main()
{
	int n=100,r;
	int temp=n;
	int i=10;
	while(temp!=0)
	{
		r=n%i;
		if(r==0)
		{
			n=((n/i)*i)+5;
			
		}
		i=i*10;
		temp=temp/10;
		
	}
	printf("%d",n);
	return 0;
}
