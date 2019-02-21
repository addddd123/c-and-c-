#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{                 clrscr();
int size,i;int *a;
printf("enter size of array\n");
scanf("%d",&size);

a=(int *)malloc( size*sizeof(int));
printf("\nenter array");
if(a=NULL)
{
printf("no memory allocated\n");

}

for(i=1;i<size;i++);
scanf("%d",&a[i]);

for(i=0;i<size;i++)
printf(" %d" ,a[i]);
getch();
}