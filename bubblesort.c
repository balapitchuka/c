#include<stdio.h>
#include<conio.h>

int main()
{
	for(i=0;i<n-1 && sorted==0;i++)
	{
		sorted=1;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				sorted=0;
			}
		}
	}
}
