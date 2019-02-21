#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5]={1,2,3,4,5},i=0,n;
	printf("ebterposition to delete");
    scanf("%d",&n);
    n--;
    for(i=5;i>=n;i--)
    a[i]=0;
    for(i=0;i<5;i++)
    printf("%d",a[i]);
}
