#include<stdio.h>
#include<conio.h>
struct example
{
int num1;
int num2;
}s[3];
void accept(struct example *sptr)
{
printf("\n enter num1 : ");
scanf("%d",&sptr->num1);
printf("\n enter num2: ");
scanf("%d",&sptr->num2);
}
void print(struct example *sptr)
{
printf("\nnum1 : %d",sptr->num1);
printf("\nnum2 : %d",sptr->num2);
}
void main()
{
int i;
clrscr();
for(i=0;i<3;i++)
accept(&s[i]);
for(i=0;i<3;i++)
print(&s[i]);
getch();
}
