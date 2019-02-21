#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
void main()
{               clrscr();
char c;
cout<<"enter text\n";
while(cin.peek()=='#')
{
cout<<c;
while(cin.peek()=='#')
{
cin.ignore(1,'#') ;
exxit(0);
}
}
getch();
}