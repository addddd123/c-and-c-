#include<conio.h>
#include<iostream>
using namespace std;
#include<graphics>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:TURBOC3/BGI");
for(int i=0;i<=430;i=i+2)
{
rectangle(0+i,320,180+i,420);
line(180+i,320,250+i,370);
line(250+i,370,250+i,420);
line(0+i,370,250+i,370);
line(0+i,340,180+i,340);
line(180+i,420,250+i,420);
circle(60+i,445,20);
circle(215+i,445,20);

if(i==370)
{
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(120,100,"U REACHED DESTINATION");
break;
}


clearviewport();


}

getch();
closegraph();
}
