
#include<conio.h>
#include<iostream.h>

class ad{
int id;
char name[10];
public:

void data(){
cout<<"enter ur name"<<endl;
cin>>name;
cout<<"enter ur id\n";
cin>>id;
}
void show()
{
cout<<"name="<<name;
cout<<"id="<<id;
}
};
int main()
{
clrscr();
ad a[10];
int i=0;
for(i=0;i<10;i++)
a[i].data();
for(i=0;i<10;i++)
a[i].show();
return 0;
}
