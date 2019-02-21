 #include<stdio.h>
#include<conio.h>

void toh(int ,char,char,char);

int main()
{ // clrscr();
int n;char a,b,c;
printf("enter n0. of disks\n");
scanf("%d",&n);
printf("the sequence is :\n");
toh(n,a,b,c);
getch();
}
void toh(int n,char e,char f,char g)
{
	
if(n==1)
{
printf("\n move 1 disk from  %c to %c\n",e,f);
return;}
else{

toh(n-1,e,g,f);
printf(" move disk .. %d from %c to %c \n",e,f);
toh(n-1,g,f,e);
}
}
