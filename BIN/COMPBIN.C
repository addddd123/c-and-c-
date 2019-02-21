//#include<conio.h>
#include<stdio.h>
//#include<stdlib.h>
main()
{
int a[10],i,n,k,l;
printf("how many left nodes do u have\n");
scanf("%d",&k);
printf("how many rcs u have\n");
scanf("%d",&l);
printf("enter data at root node \n");
scanf("%d",&a[0]);
for(i=0;i<k;i++)
{
n=(2*i)+1;
printf("u going to enetr data at indices %d",n);
//printf("data at node:::%d",a[i]);
scanf(" %d",&a[n]);
}
for(i=0;i<l;i++)
{
n=(2*i)+2;
printf("\n u going to enter data at index rcs %d",n );
scanf("%d",&a[n]);
}
for(i=0;i<6;i++)
{
printf(" %d",a[i]);
}return 0;
//getch();
} /*
for(i=0;i<6;i++)
{
printf("\ndata at lcs is\n");
printf(" %d ",a[i]);
}
getch();
} */
