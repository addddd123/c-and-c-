#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
int n;   //n=-,1 to 9,10
clrscr();
printf("enter vlue of \n");
scanf("%d",&n);
if(n<10){
if(n>0)
cout<<"no. is postive"<<endl;
	 }
else
if(n<0)
cout<<"no is negative="<<n;
else
cout<<"no is postive="<<n;
getch();
}