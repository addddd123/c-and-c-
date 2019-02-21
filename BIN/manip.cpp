#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<setw(10)<<"Hello"<<endl;
	cout<<setw(15)<<setprecision(2)<<2.5555;
	cout<<setiosflags(ios::hex);
	cout<<endl<<"Hexa of 84 is "<<84;
}
