#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
} *head;
void createlist(int n ,int position);
void inatbeg(int data);
void display();
void main()
{
clrscr();
int data,n,position;
printf("enter no..0f nodes.\n");
scanf("%d",&n);
createlist(n,position);
printf("\n data in list\n");
display();
printf("\n enter data at beg\n");
scanf("%d",&data);
printf("\n ensert position of new node\n");
scanf("%d",&position);


inatbeg (data);
printf("data in list\n");
display();

getch();
}
void createlist(int n,int position)
{
struct node *newnode,*temp;
int data,i;
head=(struct node *)malloc(sizeof (struct node));
if(head==NULL)
printf("\n list is empty\n");
else
{
printf("\nenter\\\ data at node 1\n");
scanf("%d",&data);
head->data=data;
head->next=NULL;
temp=head;
for(i=2;i<=n;i++)
{
 newnode=(struct node *)malloc(sizeof(struct node));
 if(newnode==NULL)   {
 printf("unable to allocate memory");
 break;
 }
 else
 {
printf("enter data at node %d:",i);
scanf("%d",&data);
newnode->data=data;
newnode->next=NULL;
temp->next=newnode;
temp=temp->next;

}
}
printf("\nsingly linked list created list succesfly\n");
 }
  }
 void inatbeg(int data,int position)
 {   int i;
 struct node *newnode,*temp;
 newnode=(struct node *)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("unable to allocate memry");
}
else
{
newnode->data=data;
newnode->next=NULL;
temp=head;
for(i=2;i<=position;i++)
{
temp=temp->next;
if(temp==NULL)
break;
}if(temp!==NULL)
{
newnode->next=temp->next;
temp->next=newnode;
printf("\n data inssertred siucessfly\n");
}
else
{
printf("unable to insert data at given posititon");
}
}
}
void display()
{
struct node *temp;
if (head==NULL)  {
printf("list is empty");  }
else
{
temp=head;
while(temp!=NULL)
{
printf("\n data=%d\n",temp->data);
temp=temp->next;
}
}
}



