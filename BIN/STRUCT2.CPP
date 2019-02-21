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
struct book bk1={"programming in c",600,185};
clrscr();
printf("\n book: %s",bk1.book);
printf("\n book: %d",bk1.pages) ;
printf("\n book: %f",bk1.price)  ;
 getch();
 }