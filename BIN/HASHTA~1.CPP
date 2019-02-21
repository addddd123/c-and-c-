#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<iostream.h>
#include<conio.h>

struct node
{
struct node *next;
int data;

};
struct node *a[10]={0};int n;

struct node *temp=NULL,*head=NULL;
struct node *create(int m);
struct node *create( int m)
{
	for(int i=0;i<n;i++)
	{

    temp=(struct node *)malloc(sizeof(struct node));

scanf("%d",&(temp->data));
temp->data=NULL;
if(head==NULL)
head=temp;
else
{

 temp->next=head;
 head=temp;
 }
 getch();
}
 return(head);
}
void display(){
//int ii=0;
//while(ii<10)
//{
struct node *k=head;
while(k!=NULL)
{
printf("%d",k->data);
k=k->next;
}
//ii++;
//}
}






void main()
 {
   clrscr();
	cout<<"enter size of hash table";
	for(int i=0;i<10;i++)
	{

		int l[10];
		scanf("%d",l[i]);
	     head=create(l[i]);
	     struct node *p=head;
		  if(a[i]->*p->next!=NULL)
		  a[i]=p;



	}

	display();
	getch();
}

