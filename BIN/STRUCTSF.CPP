#include<stdio.h>
#include<conio.h>
void main()
{
struct book
{
char book[30];
int pages;
float price;

};
struct book bk1,bk2;
clrscr();
printf("enter nook name pages and price  of book 1 \t");
scanf("%s",bk1.book);
scanf("%d",&bk1.pages);
scanf("%f",&bk1.price);
printf("\n book: %s",bk1.book);
printf("\n book: %d",bk1.pages) ;
printf("\n book: %f",bk1.price)  ;
printf("enter nook name pages and price  of book 2\t");
scanf("%s",bk2.book);
scanf("%d",&bk2.pages);
scanf("%f",&bk2.price);
printf("\n book: %s",bk2.book);
printf("\n book: %d",bk2.pages) ;
printf("\n book: %f",bk2.price)  ;

 getch();
 }