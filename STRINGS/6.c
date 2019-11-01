#include<stdio.h>
#include<conio.h>

#include<stdlib.h>
#include<string.h>

int main()
{
	int n,i,sum=0,k=0;
	
	
	char p[10],x[10];
	gets(p);
	for(i=0;i<10;i++)
	{
		
		x[i]='\0';
		
	}
	
    int j;
   
    for(i=0;i<10;i++)
    {
    	if(isdigit(p[i]))
    	{
    		x[k]=p[i];
    		k++;
		}
		else
		{
			sum=sum+atoi(x);
			for(j=0;j<10;j++)
			{
				x[j]=' ';
			}
			
			
		}
	}
	printf("\n%d %d",sum,atoi(p));
	return 0;
	
}

