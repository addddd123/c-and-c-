#include<conio.h>
#include<iostream.h>
int a=20;
void main()
{
clrscr();
//int a=10;
cout<<"'***a="<<a<<endl;
//::a=10;  changes value of global value to 20
cout<<"___a="<<::a<<endl;
getch();
}