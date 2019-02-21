#include<stdio.h>
#include<conio.h>
main()  {
char ch;  //clrscr();
printf("enetr character to check vowel or not\t");
scanf("%c",&ch);
switch(ch)
{
 

case 'A':
case 'a':
case 'E':
case 'e':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':     printf("%c   a vowel\n",ch);
     break; default:  printf("%c is not a vowel\n",ch);     }
//	getch();
	}
