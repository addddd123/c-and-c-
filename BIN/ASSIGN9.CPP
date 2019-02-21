#include<iostream.h>
#include<conio.h>

void main()
{
const int LENGTH=21;
char message[LENGTH];
cout<<"Enter sentence below."<<endl;
cin.getline(message,LENGTH,'\n');
cout<< message <<endl;
getch();
}
