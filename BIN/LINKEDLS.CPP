#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *link;
};
struct node *START=NULL;
struct node*  createnode()
{
struct node *n;
n=(struct node *)malloc(sizeof(struct node));
return(n);
}
void inode()
{
struct node* temp,*t;
temp=createnode();
printf("ENTER THE NO.\n");
scanf("%d",&temp->info);
temp->link=NULL;
if(START==NULL)
START=temp;
else
{
t=START;
while(t->link!=NULL)
t=t->link;
t->link=temp;
}
}
void dnode()
{
struct node *r;
if(START==NULL)

printf("list is empty\n");

else
{
r=START;
START=START->link;
free(r);
}
}
void v()
{
struct node *t;
if(START==NULL)
{
printf("list is empty\n");
}
else
{
t=START;
printf("LIST U ENTERD IS:::\n");
while(t!=NULL)
{
printf("  %d  ",t->info);
t=t->link;
}

}
}
int menu()
{
int ch;
printf("\n1. add value to list");
printf("\n2.delete first element");
printf("\n3.view list");
printf("\n4.exit(0)");
printf("\n\n::::ENTER URRR CHOICE::::\n");
scanf("%d",&ch);
return(ch);
}
void main()
{
while(1)
{
clrscr();
switch(menu())
{
case 1:
inode();
break;
case 2:
dnode();
break;
case 3:
v();
break;
case 4:
exit(0);
default :
printf("enter valid choice");
 }






getch();


}
}