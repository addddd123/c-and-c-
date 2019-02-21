#include<stdio.h>
#include<conio.h>

struct node{
int data;
struct node *next;
};*head;
void append(int num)
{
struct node *temp,*right;
temp=(struct node *)malloc(sizeof (struct node));
temp->data=num;
right=(struct node *)head;
while(right->next !=NULL);
right=right->next;
right->next=temp;
right=temp;
right->next=NULL;
}
void add(int num)
{
struct node *temp;
temp=(struct node *) malloc(sizeof(struct node));
temp->data=num;
if(head=NULL)
{
head=temp;
head->next=NULL;
}
else
{
temp->next=head;
head=temp;
}
void main{
int i,num;
struct node *n;
head=NULL;
while(1)
(
printf("\n 1.for insert\n");
printf(" 2 for display\n");
printf(" 3 for size\n");
printf(" 4 for delete\n");
printf(" 5 for exit\n");
printf("5. for exit\n");
printf("enter urr choice\n");
scanf("%d",&i);
switch(i)
{
case 1:
     printf("enter no to insert\n");
     scanf("%d",&num);
     insert(num);
     break;
case 2:

      break;
case 3:
break;
case  3:
	break;
 case 4:
       break;
 case 5:   exit(0);
 default:
 printf("enter valid choice");
 }
 }
 }
 getch();
 }


















