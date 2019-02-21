#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],r=-1,f=-1,i,n;
	clrscr();
    printf("enter elmnts");
    f++;
    for(i=0;i<5;i++)
    {
   r=(r+1)%5;
    scanf("%d",a[r]);
   }
   printf("r %d F=%d",r,f);
   printf("enter position to delete");
   scanf("%d",&n);
   n--;
   i=0;

   while(i<=n)
   {

   a[i]=NULL;
   printf(" a[i]=%d",a[i]);
   i++;
   ++f;
   }
   printf("\nf=%d",f);

   printf("\n ***elements are ***\n");

 //  if(f==-1&&r==-1)
 //  printf("empty qu");
   for(i=f;i<=r;i++);
   printf(" %d ",a[i]);
  getch();
return 0;
}





//}
