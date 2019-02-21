#include<conio.h>
#include<stdio.h>
void toh(int m,char a,char b,char c)
{
if(m==1)
(
printf("move disk %d from disk %c to disk %c\n",m,a,c);
return;
)
toh(m-1,a,c,b);
printf("move disk no %d from %c to %c\n",m,a,c);
toh(m-1,b,a,c);
int main()
{               //clrscr();
 n=3;
printf("enter n\n");
scanf("%d",n);
toh(n,'a','c','b');
getch();
}
