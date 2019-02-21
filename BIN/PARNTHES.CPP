#include<conio.h>
#include<stdio.h>
int stack[10] ,top=9;
int main()
{

int c=0,p=0;
//clrscr();
char exp[]= "(p+(q-(m+n))*j-((x+y)))/(j-(k-(-k(i-n))))";
printf("%s\n",exp);
while(exp[c]!='\0')
{
switch(exp[c])
{
case '{':
case '(':
case '[':
p++;
printf("%d",p);
break;
case '}':
case ')':
case ']':
p--;
printf("%d",p);
break;
default:
printf("%d",p);
}
c++;
}
getch();
}
