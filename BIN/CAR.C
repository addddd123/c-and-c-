#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main()
{
int i,j=0,gd=DETECT,gm;
initgraph(&gd,&gm,"C:TURBOC3/BGI");
rectangle(0,320,180,420);
line(180,320,250,370);
line(250,370,250,420);
line(0,370,250,370);
line(0,340,180,340);
line(180,420,250,420);
circle(60,445,20);
circle(215,445,20);

getch();
closegraph();
}