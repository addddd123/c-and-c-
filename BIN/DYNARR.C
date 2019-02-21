	      //#include<stdio.h>
	    #include<conio.h>
	      #include<malloc.h>
	      int main()
	      {
	      int *p,i,n=0,k;    //clrscr();
	      printf("enter  size of array");
	       scanf("%d",&k);
	      p=(int *)malloc(sizeof(k));
	      for(i=0;i<k;i++)
	      scanf("%d",(p+i));
	      for(i=0;i<k;i++) {
	      printf(" %d ",*(p+i));

	      }
	      for(i=0;i<k;i++)

	       n=n+sizeof(p);

	       printf("\ntotal mem occupied by compiler %d",n);


	      return 0;
	      }
