#include<conio.h>
#include<iostream.h>
#include<process.h>
#include<dos.h>
#include<stdlib.h> //for randomfxn();
#include<graphics.h>

void graph();
void graph(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:TURBOC3/BGI");
}
int i,j,k,l,m,n,o,r1,r2,r3;
//.............ascii value of arrow keys..................


#define ENTER 13
#define SPACE 32
#define BACK 8
#define ESC 0x1b
#define UP 0x48
#define DOWN 0x50
#define LEFT 0x4b
#define RIGHT 0x4d
#define F1 0x3b
#define F2 0x3c
#define F3 0x3d
#define F4 0x3e
#define F5 0x3f
#define F6 0x40
#define F7 0x41
#define F8 0x42
#define F9 0x43
#define F10 0x44
//..............prototypes................................


void A();

void menu();
void rect();
void circletar(int,int);
void slide();
void circle1();
void move();
void body();
//..............main....................
void main()

{
graph();
A();

menu();


//move();

getch();
}

void body()
{
graph();
rect();
move();
getch();
closegraph();
}

inline void rect()
{
setcolor(5);
rectangle(0,5,600,460);
}
void circle1()
{
}


void slide()
{
//..............slide..........

delay(1000);
}


void menu()
{      char opt; int st;
_setcursortype(_NOCURSOR); st: clrscr();
gotoxy(31,5); textcolor(3); cprintf("SNAKE_GAME");
gotoxy(31,10); textcolor(4); cprintf("S");
gotoxy(32,10); textcolor(5); cprintf("tart");
gotoxy(31,15); textcolor(6); cprintf("Q");
gotoxy(32,15); textcolor(7); cprintf("uit");
gotoxy(31,20); textcolor(14); cprintf("INSTRUCTION\nUSE ARROW KEYS TO PLAY THIS GAME");
for(;;)
{
opt=getch();
if(opt=='s'||opt=='S')  { body(); goto st; }

if(opt=='q'||opt=='Q')
{ clrscr();setcolor(4); cprintf("!Bye.."); delay(2000);  exit(0);}
}
}
void move()
{
setcolor(2); int in=2,xm,ym;;  char dir,a;
int yy=200,xx=300;  circle(300,200,15);
//circle(random(550),random(450),15);
while(dir!=ESC)
{
if(kbhit())
{
dir=getch();
cleardevice();
setcolor(2);
if(dir==UP) {
circle(xx,--yy,15);   circletar(xx,yy);}

 if(dir==DOWN)   {
circle(xx,++yy,15); circletar(xx,yy);}
 if(dir==LEFT)   {
circle(--xx,yy,15); circletar(xx,yy);}
if(dir==RIGHT)    {
circle(++xx,yy,15);  circletar(xx,yy);}
rect();
setcolor(random(13));



//while( xx!=xm&&yy!=pm )
//circle(am,pm,15);

}
}
}
void A()
{
settextstyle(1,0,9); setcolor(14);
outtextxy(60,40,"SNAKE GAME"); getch();
clearviewport();
outtextxy(80,40,"By....Adnan"); getch();
closegraph();
}
void circletar(int as,int ad)
{  int am=random(600),pm=random(400),q,w;
q=am;w=pm;

if(as==300&&ad==400)
circle(am,pm,15);
if(as==q&&ad==w)
circle(am,pm,15);
}












