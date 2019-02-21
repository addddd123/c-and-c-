#include<stdio.h>
#include<conio.h>
 main()
{
	int x1,x2,gcd;
	printf("enter the vaLUE OF X AND Y(X/Y)");
	scanf("%d%d",&x1,&x2);
if(x1>x2)
	{
	gcd=x1;
    }
else
   {
     gcd=x2;
    }
	if(x1==0 || x2==0)
	{
		printf("simplified fraction is %s\n",x1?"infinity":"0");
	}
	while (gcd > 1)
	
	{
		if(x1 % gcd == 0 && x2 % gcd ==0);
		break;
		gcd--;
	}
	
	printf("simplified fraction is %d/%d\n",gcd/x2,gcd/x1);
	getch();
    }
