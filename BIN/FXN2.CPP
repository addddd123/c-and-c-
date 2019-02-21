#include<stdio.h>
#include<conio.h>
void y();
void y()
{
printf("Y");
}
void main()
{
void a(),b(),c(),d();

clrscr();
y();
a();
b();
c();
d();
getch();
}
void a()
{
printf("A");
y();
}
void b()
{
printf("B");
a();
}
void c()
{
printf("C");
b();
}
void d()
{
printf("D");
c();
b();
a();
}

