#include<iostream>
using namespace std;
void num(char a)
{
	if(a=='A')
	throw a;
}
void num(int b)
{
	if(b>1)
	throw b;
}




main()
{
	try
	{
		num('A');
		num(124);

	}
	catch(char b)
	{
		cout<<"hdhugf";
	}
	catch(int l)
	{

	    cout<<"int";
	}
}
