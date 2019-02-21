#include<stdio.h>
#include<conio.h>
void main()
{
int e=1;
while(e==1)
{
struct book1
{
char book[30];
int pages;
float price;
struct book2
{
char book[30];
float price;
int pages;
struct book3
{
char book[30];
float price;
int pages;
}bk3;
}bk2;
}bk1;
clrscr();
printf("ENTER NAME PRICE AND NO OF PAGES OF BOOK1\t");

scanf("%s %f %d",bk1.book,&bk1.price,&bk1.pages);
printf(" u enterd price of first  book =%f  & author  name is =%s  && no pages=%d",bk1.price,bk1.book,bk1.pages);
 printf("\nENTER NAME PRICE AND NO OF PAGES OF BOOK2\t");

scanf("%s %f %d",bk1.bk2.book,&bk1.bk2.price,&bk1.bk2.pages);
printf("\n\n enterd price of first  book =%f  & author  name is =%s \n& no pages=%d",bk1.bk2.price,bk1.bk2.book,bk1.bk2.pages);
 printf("\nENTER NAME PRICE AND NO OF PAGES OF BOOK3\t");

scanf("%s %f %d",bk1.bk2.bk3.book,&bk1.bk2.bk3.price,&bk1.bk2.bk3.pages);
printf("\n\n enterd price of first  book =%f  & author  name is =%s \n& no pages=%d",bk1.bk2.bk3.price,bk1.bk2.bk3.book,bk1.bk2.bk3.pages);

printf("\n if u want to continue press 1 else ress any key to exit\n");
scanf("%d",&e);
}
getch();
}
