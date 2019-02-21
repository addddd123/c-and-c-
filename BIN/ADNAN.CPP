#include<stdio.h>
//#include<stdlib.h>
int main()

{


	int choice,b,age[10],i;

     char name[50],gender [10];



	printf(	"WELCOME TO ADNANS ROYAL ACADEMY OF COMPUTER SCIENCE\t");

		printf("\n1. for admisson\t");

       printf("\n2.for fee structure\t");

	 printf("\n3. for eligiblity\t");

 printf("\n4. for exit\t");

scanf("%d",&choice);

   switch(choice)


 {
	case 1:

 printf("enter your name age and gender\t");

scanf("%s%d%s",&name,&age[i],&gender);


 if(age[i]<18)

		printf("U  not mature to join this course");

	else{

 printf(" u have been registerd sucessfully");

  printf("DO U WANT TO CONTUNIUE WITH THIS INFO\t\t\t");

  printf("name=%s, age=%d,  gender=%s\t\t\t",name,age[i],gender);

				     }


				 break;
	case 2:
	      printf("FEE STRUCTURE OF THE GIVEN SELECTED COURSE\t    is   RS 1000\nSCHOLARSHIP WILL BE PR0VIDED FOR PHYSICALLY HANDICAPED STUDENTS");
	      break;
	case 3:

 printf("ELIGIBLITY TO JOIN THE COURSE IS \n 12 th qualify with percantage of 65%\n");


 break;

  case 4:

      exit(0);

	 default:

      printf("INVALID CHOICE");

	 }
	      return 0;

}


		      
            	      
						 
