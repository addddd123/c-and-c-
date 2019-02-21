#include<conio.h>

#include<iostream>
using namespace std;
#include<stdio.h>
 main()
{
//clrscr();
 int k=9;   // or register int k=9;    int *n=&k;
register int *n=&k;
cout<<*n;
getch();
//getchar();
}
