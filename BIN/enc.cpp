#include<iostream>
#include<iomanip>
using namespace std;
#include<fstream>
#include<string.h>
int main()
{
	ofstream obj; 
	obj.open("enc.txt");
	char ab[4], a[13], la,gb;
	gets(a);
	int c=strlen(a);
	for(int i=0;i<strlen(a);i++)
	ab[i]=a[i]+12;
	obj<<ab;
	obj.close();
	ifstream k;char t,m;int i=0;int xx[10];
	k.open("enc.txt");
	while(k.eof()==0)
	{   

 
		t=k.get();
		m=t-12;

cout<<m;
cout<<m;		
	}
	

	k.close();
	
	return 0;
}
