#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:TURBOC3/BGI");
setfillstyle(SOLID_FILL,RED);
circle(200,200,80);
floodfill(201,201,WHITE);
circle(200,100,70);
rectangle(300,50,450,100);
ellipse(300,350,0,360,100,50);
getch();
closegraph();
return(0);
}
