#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
}*head=NULL,*temp,*p;
struct node *createlost();
void dispalylist();
struct node *createlist()
{    
    int n,i=1;

	printf("how many nodes\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
   {
	temp=(struct node *)malloc(sizeof(struct node));
   printf("enter data at node %d=\t",i);
  scanf("%d",&(temp->data));
  temp->next=NULL;
  if(head==NULL)
{

  head=temp;
 // temp->next=head;
}
else
  {
    p=head;
    while(p->next!=head)
    p=p->next;
    p->next=temp;
   // temp->next=head;
} 
  } 
   return(temp);

}
void main()
{       clrscr();
	head=createlist();
	getch();
}

