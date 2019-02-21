#include<stdio.h>
#include<stdlib.h>
#include<process.h>
//#include<conio.h>
int *q,rear=0;
void create();
void display();
void ldelete();
int main()    //qu by using pointer
{     //  clrscr();

	while(1)
	{

	  int choice,k;

	puts("\n1.create");
	puts("\n2.display");
	puts("\n3.delete");
	puts("\n4.exit");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			create();
			break;
		case 2:
		     display();
			break;
		case 3:
		      ldelete();
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("\n enter valid choice");
	}
	}
}
void create()
{
	rear=0;
	while(1)
	{
		printf(" enter element\t");
		scanf("%d",q);
		q++;
		rear++;
		if(rear==7)
		{
			printf("\nqueue is full:");
		   break;
	   }
	}
}

void ldelete()
{
	int n,rear=0;

	printf("\n enter position at which u want to delete");
	scanf("%d",&n);
	while(rear<=n)
	{
	       q=NULL;
		rear++;
	}
}
 void display()
		{
		int rear=0;
		q=q-7;
		if(q=NULL)
		printf("empty qu");
		exit(0);
		if(q==NULL)
		{
		
		printf("empty queue");
		exit(0);
		}
		while(rear<7)
		{
		printf(" element :%d ",*(q+rear));
		rear++;
		}
		}

