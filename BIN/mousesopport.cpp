#include<stdio.h>
#include<dos.h>
 
int initmouse();
union REGISTER i, o;
 
int main() {
   int flag;
 
   flag = initmouse();
 
   if (flag == 0) {
      printf("Mouse support not available.");
   } else {
      printf("Mouse support available.");
   }
 
   return 0;
}
 
int initmouse() {
   i.x.ax = 0;
   int86(0X33, &i, &o);
   return (o.x.ax);
}
