#include<iostream>
using namespace std;
/*namespace window
{
	int v=20;
	float f=2.5;
	
}
namespace wind
{
	int v=20;
	float f=2.5,e;
	
}
int main()
{
	cout<<"Addition of two numbers: "<<endl;
	cout<<window::v+wind::v<<endl;
	cout<<"Multiplication of two numbers: ";
	cout<<window::f*wind::f<<endl;
}*/
/*namespace xyz
{
	int a=2;
	char b='p';
	namespace hanan
	{
		int a=5;
		char b='u';
		
	}
}
namespace
{
	int g=100;
	
}
int main()
{
	cout<<"a= "<<xyz::a<<endl;
	cout<<"b= "<<xyz::b<<endl;
	cout<<"a= "<<xyz::hanan::a<<endl;
	cout<<"b= "<<xyz::hanan::b<<endl;
	cout<<"g= "<<g;
}*/
namespace xyz
{
	int mul(int x,int y)
	{
		return(x*y);
	}
	int div(int x,int y);
}
int xyz::div(int x,int y)
{
	return(x/y);
}
int main()
{
	cout<<"Multiplication= "<<xyz::mul(10,20)<<endl;
	cout<<"Division= "<<xyz::div(20,10)<<endl;
}
