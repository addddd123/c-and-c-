#include<graphics.h>
#include<conio.h>
#include<dos.h>
 
void showmouseptr();
void hidemouseptr();
 
union REGS i, o;
 
int main() {
   int count = 1, gDriver = DETECT, gMode;
 
   initgraph(&gDriver, &gMode, "C\\:tc\\bgi");
 
   i.x.ax = 0;
   int86(0X33, &i, &o);
 
   if (o.x.ax == 0) {
      printf("ntMouse Support is Unavailable !!");
   } else {
      showmouseptr();
 
      while (count <= 10) {
         getch();
         count++;
         if (count % 2 == 0)
            hidemouseptr();
         else
            showmouseptr();
      }
   }
   getch();
   return 0;
}
 
void showmouseptr() {
   i.x.ax = 1;
   int86(0X33, &i, &o);
}
 
void hidemouseptr() {
   i.x.ax = 2;
   int86(0X33, &i, &o);
}
