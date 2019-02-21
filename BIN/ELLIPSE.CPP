#include<conio.h>
#include<iostream.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:TURBOC3/BGI");
ellipse(120,210,0,360,70,30);
ellipse(260,210,0,360,70,30);
line(50,210,80,30);
line(330,210,350,15 );
ellipse(120,210,0,360,20,12);
ellipse(260,210,0,360,20,12);

getch();
closegraph();
}