#include<conio.h>
//#include<iostream.h>
//using name space std;
int main()
{               //clrscr();
const int length=21;
char message[length];
cout<<"enter sentence on line below"<<endl;
int i=0;
do{
//cin.getline(message,length);
cin.get(message[i]);
++i;
}
while(i<length-1&&message[i]!='\n');
cout<<message<<endl;
getch();
}
