#include<stdio.h>
main()
{
	int i=0,j=0,k=14,m=2;
	clrscr();
	for(i=0;i<10;i++)
	{
	k=k-1;

	for(j=0;j<k;j++)
	{

	 if(j<i)
	 printf(" ");

	 else

	printf("*");

	}
     printf("\n");

    }

    getch();
}
