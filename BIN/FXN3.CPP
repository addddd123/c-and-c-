#include<stdio.h>
#include<conio.h>
void fun();
void main()
{
int b=10,c=5;
clrscr();
printf("\n in main() %d=b,%d=c",b,c);
fun();
getch();
}
void fun()
{
int b=30,c=50;
printf("\n in fun() %d=b,%d=c",b,c);

}
