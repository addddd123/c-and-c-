#include<stdio.h>
#include<conio.h>
void fun();
int b=10,c=5;
void main()
{
clrscr();
printf("\n in main b=%d,c=%d",b,c);
fun();
b++;
c++;
printf("\n again in main() b=%d,c=%d",b,c);
getch();
}
void fun()
{
b++;
c--;
printf("\n in fun() b=%d,c=%d",b,c);
}

