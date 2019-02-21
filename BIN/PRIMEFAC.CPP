
#include<iostream>
using namespace std;
#include<math.h>
#include<conio.h>
int aa[10],aaa[10];
main()
{


void primeno(int);
void primeno1(int);

cout<<"enter no";
int a;
cin>>a;
int x;
cin>>x;
primeno(a);
 cout<<endl;
primeno1(x);

getch();
}
void primeno(int a)
{  int c=0;
for(int i=2;i<=sqrt(a);i++)
{
if(a%i==0)
{  int nm=a/i;

if(nm%i==0)
{
aaa[c]=i;

c++;
cout<<"prime="<<i;
a=nm;
i--;
}
else
{
aaa[c]=i;

c++;
cout<<"prime="<<i;

}
}
}

}

void primeno1(int a)
{  int c=0;
for(int l=2;l<=sqrt(a+1);l++)
{
if(a%l==0)
{  int nm=a/l;

if(nm%l==0)
{
aa[c]=l;

c++;
cout<<"prime="<<l;
a=nm;
l--;
}
else
{
aa[c]=l;

c++;
cout<<"prime="<<l;

}
}
}

}


