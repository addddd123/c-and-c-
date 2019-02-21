#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
}*head;
void createlist()
{

struct node *newnode;
newnode=(struct node *)malloc(sizeof( struct node));
printf("\nenetr data into the list\t");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
printf("\n empty list");
}
void main()
{
 createlist();
 getch();
 }