#include<conio.h>
#include<malloc.h>
#include<stdio.h>
void main(){ struct node{
int data;
struct node *next;
}*head=NULL,*temp;
head=(struct node *)malloc(sizeof(struct node));


printf("enter data at node which u want to link\n");
scanf("%d",head->data);
head->next=NULL;

int i,n;
temp=(struct node *)malloc(sizeof(struct node));
printf("how many elemnts u want to enetr\n");
scanf("%d",&n);
printf("data u enterd is %d",head->data);
printf("enter data in list\n");
for(i=0;i<=n;i++)
{
scanf("%d",temp->data);
temp->next=NULL;
}
while(head!=NULL)
head->next=temp;
}
printf("elements after linking are\n");
while(head!=NULL)
{
printf("%d",head->data);
}
getch();

