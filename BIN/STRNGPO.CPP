#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
int i;
char *a;
gets(a);
puts(a);
i=strlen(a);
printf("string length==%d",i);
getch();
}