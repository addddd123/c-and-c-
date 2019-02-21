#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int partion(int *A,int start,int end)
{// int piviot;
int piviot=A[end];
int partionindex=start; //set partion index intially
for(int i=start;i<end;i++)
{
if(A[i]<=piviot)
{
////swap(A[i],A[partionindex]);
partionindex++;
}
}
swap(A[partionindex],A[end]);
return(partionindex);
}


void quicksort(int *A,int start,int end)
{
if(start<end)
{
int partionindex=partion(A,start,end);
quicksort(A,start,partionindex-1);
quicksort(A,partionindex+1,end);
}
}

int main()
{
int A[]={7,6,5,4,3,2,1,0};
quicksort(A,0,7);
for(int i=0;i<8;i++)
printf("\n %d ",A[i]);
//getch();
}
