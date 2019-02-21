#include<iostream>
using namespace std;
int main()
{              
char j=0;
char x[20];
cout<<"enter a string: ";
while(x[j++]!='\n')
cin.get(x[j]);
j=0;
cout<<"\n entered string: ";
while(x[j++]!='\n')
cout.put(x[j]);
}
