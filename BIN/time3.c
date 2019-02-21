#include<stdio.h>
#include<conio.h>
#include<time.h>
int main()
{
	int c[500000],i,key;
	time_t start,end,bend;
	start=time(NULL);
	for(i=0;i<=500000;i++)
	{   
	    bend=time(NULL); 
		c[i]=i;
	}
	puts("enter keyy");
	scanf("%d",&key);
	for(i=0;i<=500000;i++)
    {
	
	if(key==c[i])
	{
		end=time(NULL);
		printf("key found");
		break;
	}
    }
   
	printf("time=%f at position c[%d]",difftime(end,start),i);  
}
