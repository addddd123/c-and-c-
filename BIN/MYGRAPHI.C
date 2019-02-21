#include<conio.h>
#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;int i=20,p=20;
initgraph(&gd,&gm,"C:TURBOC3/BGI");
//circle(250,260,80);
rectangle(150,200,450,350);
line(150,200,300,40);
line(300,40,450,200);
line(170,200,170,350);
for(i=0;i<4;i++)
{
line(190,200,170,250);
}
getch();
closegraph();
getch();

}