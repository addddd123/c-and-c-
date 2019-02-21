#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void f(class ad);
class ad
{
int x;
friend void f();
}l;


void main()
{
clrscr();
f();

getch();
}
 void f()
{
//scanf("%d",obj.x);
//printf("%d",obj.x);
printf("enter value to private member x\n");
cin>>l.x;
cout<<l.x;
}



