#include<conio.h>
#include<iostream.h>
#include<graphics.h>
void main()
{
int  gd=DETECT,gm;
initgraph(&gd,&gm,"C:TURBOC3/BGI");
for(float i=0;i<100;i=i+0.1)
{
circle(120,200,i);

clearviewport();
if(i>=99)
break;
}
for(float k=0;k<100;k);
{
circle(150,200,k);

clearviewport();
}

getch();
closegraph();
}