#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int *p,x=5,**q;
p=&x;
q=&p;

printf("%d",x);
printf(" %u ",&x );
printf(" %u",&p);
printf(" %d",**q);
getch();
}