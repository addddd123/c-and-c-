#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct stack
{
int num;
struct stack *next;
}*t=0;
typedef struct stack adnan;
void push();
int pop();
void show();
int main()
{
char chr;
int opt,no;
do
{
//clrscr();
printf("\n 1:push");
printf("\n 2:pop");
printf("\n 3:show");
printf("\n >3:exit");
scanf("%d",&opt);
switch(opt)
{
case 1:
       push();
       break;
case 2:
      no=pop();
      printf("\n deleted no was %d",no);
      break;
case 3:
      show();
      break;
default:
	printf("\n invalid choice");
	exit(0);
}
printf("\n contuniue(y/n)");
fflush(stdin);
chr=getche();
}
while(chr=='Y'||chr=='y');
}
void push()
{
adnan *node;
node=(adnan *)malloc(sizeof(adnan));
printf("\n enter the no.");
scanf("%d",&node->num);
node->next=t;
t=node;
}

int pop()
{
adnan *temp;
temp=t;
if(t==NULL)
{
puts("\n stack underflow");
getch();
exit(0);
}
else
{
t=t->next;
free(temp);
}
return(temp->num);
}

void show()
{
adnan *temp;
temp=t;
while(temp->next!=NULL)
{
printf("%d",temp->num);
temp=temp->next;
}
printf(" %d, ",temp->num);
}

