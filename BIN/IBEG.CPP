#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
} *head;
void createlist(int n);
void inatbeg(int data);
void display();
void main()
{
clrscr();
int data,n;
printf("enter no..0f nodes.\n");
scanf("%d",&n);
createlist(n);
printf("\n data in list\n");
display();
printf("\n enter data at beg\n");
scanf("%d",&data);
inatbeg (data);
printf("data in list\n");
display();

getch();
}
void createlist(int n)
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
 void inatbeg(int data)
 {
 struct node *newnode;
 newnode=(struct node *)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("unable to allocate memry");
}
else
{
newnode->data=data;
newnode->next=head;
head=newnode;
printf("data inserted sucessfly");
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






