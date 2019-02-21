#include<iostream>
using namespace std;
int main()
{
 	int n,g;
 	cin>>n;
 g=n;

   for(int k=0;k<=n;k++)
 {  
	    for(int l=0;l<=g;l++)
    cout<<"  ";
	--g;
  	
	for( int i=k;i>=0;i--)
	{   
		cout<<""<<i<<" ";
	
	
		if(i==0)
		{
			for(i=1;i<=k;i++)
		    cout<<""<<i<<" ";
		   endl(cout);
			break;
			
		
		}
	
}
}
}
