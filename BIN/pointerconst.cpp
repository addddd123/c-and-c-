#include<iostream>
using namespace std;
int main()
{
	char *x="abcd";
	//char y[20]="abcd";
	//x=&y[0];
	int i=0;
	while(x[i]!='\0')
	{
		cout<<x[i];
		i++;
	}
}
