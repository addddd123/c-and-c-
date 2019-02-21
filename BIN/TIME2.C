#include<conio.h>
#include<stdio.h>
#include<time.h>
 main()
{
time_t start,end;
int i;
start=time(NULL);
// clrscr();
getch();
for(i=0;i<=32767;i++)  //computer is fast so loop takes 0 unit;
end=time(NULL);
printf("%f=time took for getch()",difftime(end,start));

return 0;
//getch();
}
