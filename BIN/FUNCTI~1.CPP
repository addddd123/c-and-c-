#include<iostream.h>
#include<conio.h>
int add(int,int);
void main()
{
	int a,b,r; clrscr();
	cout<<"enter a and b"<<endl;
	cin>>a>>b;
	r=add(a,b);


	cout<<"a+b="<<r;
	getch();
}
int add(int d,int e)
{
	int c;
	c=d+e;
	return(c);
}
