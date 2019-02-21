#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{

int a,b,s;           int d;
do
{ clrscr();
cout<<"enter two numbers";
cin>>a>>b;                    s=a+b;

cout<<"sum of enterd two numbers" <<a<<"and"<<b<<"is="<<s<<endl;
 cout<<"enter 1 if u want to contuniue else any key"<<endl;
 cin>>d;
  }
while(d==1);
exit(0);
getch();
}