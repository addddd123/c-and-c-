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
struct book bk1;
clrscr();
printf("\n size of structure ele\ments");
printf("\n book: %d",sizeof(bk1.book));
printf("\n book: %d",sizeof(bk1.pages)) ;
printf("\n book: %d",sizeof(bk1.price))  ;
printf("\n book: %d",sizeof(bk1));
 getch();
 }
