#include<conio.h>
#include<iostream.h>
#include<math.h>
void main()
{
clrscr();
int a ;
cin>> a;
int c;
for(int i=2;i<=sqrt(a);i++ )
{
if(a%i==0)
{
c=a/i;
if(c%i==0)
{
//if(c==i)
cout<<" p= "<<i;
i--;
a=c;

}
else
cout<< " p="<<i;
}

}

getch();
}
