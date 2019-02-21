#include<conio.h>
#include<stdio.h>
void i(int);
int main()
{           //    clrscr();
int n=5;
i(n);
// printf("n+++++++%d\n",n);
getch();
}
void i(int n)
{

if(n==1)
{
return;
}
//(n-1);
printf("n:::::%d\n",n);
i(n-1);

}
