#include<conio.h>
#include<iostream.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:TURBOC3/BGI");
circle(120,200,50);


getch();
closegraph();
}