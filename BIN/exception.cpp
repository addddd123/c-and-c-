#include<iostream>
using namespace std;
int main()
{
	int i=0,d[5],k=0;
	printf("enter data\n");
	for(i=0;i<5;i++)
	{
	
	scanf("%d",&d[i]);
	k=k+d[i];
	 try
    {
    	if(k==0)
    	throw(k);
    	 
    
	}
	
    
   
	catch (int k){
	    
		printf("exception caught ");
		}}
		 printf("sum=%d",k);
		

}
