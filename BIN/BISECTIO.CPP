#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
float guess;  float a1,a2,a3; //coeff of eqn;
clrscr();
cout<<"\n if u have given x1,x2 then press 1 else press 2";
int k;
cin>>k;
cout<<"\nenter coeff of equation";
cin>>a1>>a2>>a3;
cout<<"\n enter power of varibles in equation";
int x1,x2;
cin>>x1>>x2;
if(k==1)
{

}
else
{
float X=ceil(a2/a1); float a,b; int i=0;
float fx[4]={0};
int l=X-2*X;
cout<<X;
while(X>=l)
{
fx[i]= sqrt(pow(a2/a1,2)+2*pow(a3/a1,2));
cout<<"\n fx="<<fx[i];
X--;
if(fx[--i]<0&&fx[i]>0||fx[--i]>0&&fx[i]<0)
{   if(fx[--i]<0){
a=fx[--i];b=fx[i];}
else {
b=fx[--i];a=fx[i];    }
cout<<"a="<<a<<"b="<<b;
break;

}i++;
}
}
getch();
}