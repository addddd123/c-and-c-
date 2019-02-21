#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include "GRAPH.H"
#include "ascii.h"
#include<graphics.h>

//::::::::::::::::::::global_varibles::::::::::::::::::::://
int del=10,scoremax=5,twoball=0;

/* .......................  prototype...........................   */
void graph();
void menu();
void callintro();

void main()
{
clrscr();
callintro();
menu();
getch();
}


void graph()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:TURBOC3/BGI");
printf(" ...press any key to contuniue...  ");
}


void callintro()
{
graph();
settextstyle(1,0,9);
setcolor(10);
outtextxy(80,140,"PING_PONG");
getch();
outtextxy(80,250,"By Adnan");

getch();
closegraph();
}

void menu()
{
char opt; st:clrscr();
_setcursortype(_NOCURSOR);
gotoxy(33,5);textcolor(9);cprintf("Ping_Pong");
gotoxy(33,9);textcolor(12);cprintf("S");
gotoxy(34,9);textcolor(10);cprintf("ingle Player");
gotoxy(33,12);textcolor(9);cprintf("M");
gotoxy(34,12);textcolor(10);cprintf("ultiplyer");
gotoxy(33,18);textcolor(12);cprintf("L");
gotoxy(34,18);textcolor(10);cprintf("imit score: %d",scoremax);
gotoxy(33,18);textcolor(5);cprintf("G");
gotoxy(34,18);textcolor(12);cprintf("ame Speed : %d",del);
gotoxy(33,21);textcolor(12);cprintf("T");
gotoxy(34,21);textcolor(10);cprintf("wo_ball mode:");
if(twoball) cprintf("ON");else cprintf("OFF");
gotoxy(33,24);textcolor(12);cprintf("Q");
gotoxy(34,24);textcolor(10);cprintf("uit");
for(;;)
{
opt=getch();
if(opt=='g'||opt=='G') { del++;if(del==21) del=3;goto st;}
if(opt=='l'||opt=='L') {scoremax+=5; if(scoremax==205) scoremax=0; goto st; }
if(opt=='q'||opt=='Q') { clrscr(); cout<<" BYE HAVE A NICE TIME"; delay(1000);exit(0);}
if(opt=='s'||opt=='S'{ mode=1; dif();  return; }
if(opt=='M'||opt=='m') { if(twoball) twoball=0; else twoball=1;goto st;}
}
}