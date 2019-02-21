#include<conio.h>
#include<stdio.h>
void main()
{ clrscr();
int *p,j,e;
for(e=4;e>=0;e--)
scanf("%d",(p+e));
for(e=0;e<5;e++)
printf(" %d ",*(p+e));
getch();
}