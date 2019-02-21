#include<conio.h>
#include<stdio.h>
#include<time.h>
void main()
{
time_t t;
clrscr();
time(& t);

printf("%d",localtime(& t));
printf("\n%s",ctime(&t));

getch();
}