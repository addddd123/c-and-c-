#include<iostream>
using namespace std;
int main()
{ 
int x,y;
cout<<"\n enter the value of x and y\n";
cin>>x>>y;
//float j=x/y;

try
{
	if(y!=0)
	cout<<"\n x/y";
	else
	{
		throw 0;
	}
}
catch (int k)
{
	cout<<"\n exception caught : j =\n";
}
return 0;
}
