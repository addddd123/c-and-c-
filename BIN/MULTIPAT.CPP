#include<conio.h>
#include<iostream.h>
class A
{
protected:
int a;
};
class B :virtual public A
{
protected:
int b;
} ;
class C:virtual public A
{
protected :int c;
};
class D:public B,C
{
int d;
public:
void get()
{
cout<<"enter vlues of a,b,c,d";
cin>>a>>b>>c>>d;
}
void put()
{
cout<<"a="<<a<<"b="<<b<<"c="<<c<<"c="<<"d="<<d;
}
};
void main()
{
clrscr();
D k;    C l;
k.get();
k.put();
getch();
}


