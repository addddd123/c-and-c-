#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	 	char x[30];
	 	cout<<"Enter any string: ";
	 	cin.getline(x,30);
	 	cout<<"Entered string: "<<x;
	 	cout<<"Entered string ";
	 	cout.write(x,30);
	 	cout<<"Entered string: ";
	 	cout.write(x,strlen(x));
	 	
}
