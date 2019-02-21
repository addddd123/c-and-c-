#include<conio.h>
#include<iostream>
using namespace std;
int rexn(int);
int main()
{
int n=10;
//clrscr();
int c;
c=rexn(n-1);

cout<<c;
getch();



}
int rexn(int k)
{ 

int l=0;
if(k==1)
{
cout<<l;

return(1);
}
else{
 
l=l+k;
rexn(k-1);
}

}
